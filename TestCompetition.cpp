/*
Author: Carlos Caballero
Course: csci 136
Instructor: Katherine Howitt
Assignment: Lab 3 Competition Test

This program will test the Competition class
*/

#include "Competition.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	Competition game;
	game.start();

	cout << endl << "game 2" << endl;
	Competition game2;
	game2.start();

	cout << endl << "game 3" << endl;
	int harePattern[] = {6,-3,2,0,0};
	Hare rabbit(harePattern, sizeof(harePattern)/sizeof(harePattern[0]), 0);

	int torPattern[] = {1,2,2,-1};
	Tortoise tor(torPattern, sizeof(torPattern)/sizeof(torPattern[0]), 0);

	Competition game3(&rabbit, &tor, 10);
	game3.start();

	return 0;
}