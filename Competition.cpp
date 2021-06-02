/*
Author: Carlos Caballero
Course: csci 136
Instructor: Katherine Howitt
Assignment: Project 3 Competition source file

This program will be the source file for the Competition class
*/

#include "Competition.h"
#include <cstdlib> // for rand. srand(1) needed for autograder
#include <ctime> // for rand. locally use srand(time(0));
#include <iomanip> // for setw();
#include <iostream>
using namespace std;

Competition::Competition()
{
	srand(time(0));
	rabbit = new Hare; //Creeates rabbit with default constructor
	//The same as rabbit = new Hare();
	tor = new Tortoise;
	rd = new Road;
}

Competition::Competition(Hare* rabbit, Tortoise* tor, int length)
{
	srand(time(0));
	this->rabbit = new Hare(rabbit->getPattern(), rabbit->getPatternLength(), rabbit->getPosition());
	this->tor = new Tortoise(tor->getPattern(), tor->getPatternLength(), tor->getPosition());
	rd = new Road(length);

}

Competition::~Competition()
{
	delete rabbit;
	rabbit = nullptr; //avoid dangling pointer problem.
	delete tor;
	tor = nullptr;
	delete rd;
	rd = nullptr;
}

void Competition::start(){
	int lastBlock = rd->getLastBlock(); //Last block of the road
	int round = 1;
	while (tor->getPosition() < lastBlock && rabbit->getPosition() < lastBlock)
	{
		rabbit->move();
		if(rabbit->getPosition() < 0)
			rabbit->setPosition(0);
		else if (rabbit->getPosition() > lastBlock)
			rabbit->setPosition(lastBlock);

		tor->move();
		if(tor->getPosition() < 0) //If the position is too far or too left it is set on the right position.
			tor->setPosition(0);
		else if (tor->getPosition() > lastBlock)
			tor->setPosition(lastBlock);

		//cout << setw(3) << round << " ";

		rd->mark(rabbit->getPosition(), 'H'); // Sets hare as H in the road
		rd->mark(tor->getPosition(), 'T'); // Sets tortoise as T in the road

		cout << setw(3) << round << " " << rd->toString() << endl; // Prints out the road

		if (rabbit->getPosition() == tor->getPosition()){ //If both the tor and the hair are in the same position
			cout << "Ouch, Tortoise bites Hare." << endl; //Print this.
		}

		//Now unmark the positions of the tor and hare. rd->clear() can also be used.
		rd->mark(rabbit->getPosition(), ' '); 
		rd->mark(tor->getPosition(), ' ');

		round++;
	}

	if(tor->getPosition() == lastBlock && rabbit->getPosition() == lastBlock)
		cout << "It is a tie." << endl;
	else if (rabbit->getPosition() == lastBlock)
		cout << "Yuck, hare wins." << endl;
	else
		cout << "Yay!!! tortoise wins!" << endl;
}