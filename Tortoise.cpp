/*
Author: Carlos Caballero
Course: csci 136
Instructor: Katherine Howitt
Assignment: Lab 3 Tortoise Source File

This program will be the source file for Tortoise
*/

#include "Tortoise.h"
#include <cstdlib> // include rand()
#include <cstddef> // include NULL
#include <iostream>
using namespace std;

Tortoise::Tortoise() : length(10) // Length, a cons, is set to 10 (number of index in the array [0 to 9])
{
	pattern = new int[length]; // Dynamically allocated memory array 10 int.
	int defaultPattern[] = {3,3,3,3,3,-6,-6,1,1,1};
	for(int i = 0; i < length; i++){
		pattern[i] = defaultPattern[i];
	}

	position = 0;
}

Tortoise::~Tortoise(){
	delete[] pattern;
	//pattern = NULL; //Okay to use with #include <cstddef>
	pattern = 0;
}

Tortoise::Tortoise(int* pattern, int size, int position) : length(size > 0 ? size : 10) // if size is greater than 0, the length will equal size. Else, length will be 10
{
	this->pattern = new int[length]; // NOT the pattern from the parameter, but from private data memeber variable

	if(size > 0){
		for(int i = 0; i < size; i++){
			this->pattern[i] = pattern[i];
		}
	}
	else{ //size < 0
		int defaultPattern[] = {3,3,3,3,3,-6,-6,1,1,1};
		for (int i = 0; i < length; i++){
			this->pattern[i] = defaultPattern[i];
		}
	}

	this->position = position;
}

int Tortoise::getPosition() const{
	return position;
}

int* Tortoise::getPattern() const{
	return pattern;
}

int Tortoise::getPatternLength() const{
	return length;
}

void Tortoise::setPosition(int newPosition){
	position = newPosition;
}

void Tortoise::move(){
	int index = rand() % length; // Chooses random integer in the pattern array.
	int stepToMove = pattern[index]; // Stores the random integer into a variable
	position += stepToMove; // Adds the random amount chosen in the pattern array to the position to create a new position.
}

/*int main(){
	Tortoise bob;
	int* pattern = bob.getPattern();
	int length = bob.getPatternLength();
	for (int i = 0; i < length; i++){
		cout << pattern[i] << ", ";
	}
	cout << endl;

	int carl_pattern[] = {-3, -2, -1, 0, 1, 2, 3, 4, 5};
	int carl_length = sizeof(carl_pattern) / sizeof(carl_pattern[0]);
	Tortoise carl(carl_pattern, carl_length, 5);
	int* pattern2 = carl.getPattern();
	int length2 = carl.getPatternLength();
	for(int i = 0; i < length2; i++){
		cout << pattern2[i] << ", ";
	}
	cout << endl;

	int position = carl.getPosition();
	cout << "Position: " << position << endl;
}*/
