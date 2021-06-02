/*
Author: Carlos Caballero
Course: csci 136
Instructor: Katherine Howitt
Assigment: Project 3 Hare source file

This program will be the source file for the Hare.
*/

#include <iostream>
using namespace std;
#include "Hare.h"
#include <cstddef> // It includes NULL
#include <cstdlib> // to use rand.

// Empty constructor will set the lenght(10). Create the array with the different
// possible movements of the hare and stores it in the pointer array. Lastly sets position to 0.
Hare::Hare() : lenght(10) //set outside because it is declared const.
{
	pattern = new int[lenght]; // dynamically allocated 10-ints. pattern is an array.
	int defaultPattern[] = {0,0,9,9,-12,1,1,1,-2,-2};
	for (int i = 0; i < lenght; i++){
		// this->pattern[i] refers to the data member, not the parameter list.
		pattern[i] = defaultPattern[i]; 
	}

	position = 0;
}


Hare::Hare(int* pattern, int size, int position) : 
// If the size is greater than zero, set the lenght to be the size.
// If not, set the lenght to be 10.
lenght(size > 0 ? size : 10)
{
	// Cannot do this->pattern = pattern to set the pattern in the parameter equal to the private member variable
	// because they both point to the same address. This violates encapsulation.

	this->pattern = new int[lenght];

	if (size > 0){
		for (int i = 0; i < size; i++){
			this->pattern[i] = pattern[i]; // The pattern in the parameter is set as the pattern for the hare.
		}
	}
	else{ //size < 0
		int defaultPattern[] = {0,0,9,9,-12,1,1,1,-2,-2};
		for (int i = 0; i < lenght; i++){
			this->pattern[i] = defaultPattern[i];
		}
	}

	this->position = position; // The position in the variable parameter is placed in the private memeber variable. 

}
Hare::~Hare()
{
	delete[] pattern;
	pattern = 0; // set pattern to be nullptr
}

int Hare::getPosition() const{
	return position;
}

void Hare::setPosition(int newPosition){
	position = newPosition;
}

int* Hare::getPattern() const{
	return pattern;
}

int Hare::getPatternLength() const{
	return lenght;
}

void Hare::move(){
	int index = rand() % lenght; // Gets a random number between 0 and the lenght
	int stepsToMove = pattern[index]; // Chooses the number in the array according to the index as the next step
	position += stepsToMove; // Adds the steps to the position
}

/*int main(){
	srand(time(NULL));
	Hare rabbit;
	int* pattern = rabbit.getPattern();
	int length = rabbit.getPatternLength();
	for (int i = 0; i < length; i++){
		cout << pattern[i] << ", ";
	}
	cout << endl;

	int rabbit2_pattern[] = {1,2,3,-1};
	int rabbit2_lenght = sizeof(rabbit2_pattern) / sizeof(rabbit2_pattern[0]);
	cout << "Length is: " << rabbit2_lenght << endl;
	Hare rabbit2(rabbit2_pattern, rabbit2_lenght, 2);
	int* pattern2 = rabbit2.getPattern();
	int length2 = rabbit2.getPatternLength();
	for (int i = 0; i < length2; i++){
		cout << pattern2[i] << ", "; 
	}
	cout << endl;

	int position = rabbit2.getPosition();
	cout << "Position: " << position << endl;

}*/