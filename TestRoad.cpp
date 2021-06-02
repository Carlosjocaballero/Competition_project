/*
Author: Carlos Caballero
Course: csci 136
Instructor: Katherine Howitt
Assignemnt: Lab 3 Road Test

This program will test the Road class
*/

#include "Road.h"
#include <iostream>
using namespace std;

int main(){
	Road path; // declared Road path based on default constructor.
	path.mark(0, 'H');
	path.mark(2,'T');
	char* blocks = path.toString();
	cout << blocks << endl;

	//Before going to the next round we clear the path
	//path.clear(); is "overkill"(?) so we just make the spaces taken blank as follows:
	path.mark(0, ' ');
	path.mark(2,' ');
	//Beginning of second round.
	path.mark(6, 'H');
	path.mark(3, 'T');
	cout << blocks << endl;



	return 0;
}