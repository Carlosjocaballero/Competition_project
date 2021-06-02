/*
Author: Carlos Caballero
Course: csci 136
Instructor: Katherine Howitt
Assignment: Lab3 Test Tortoise

This program will test the Tortoise class
*/

#include "Tortoise.h"
#include <iostream>
using namespace std;

int main(){
	Tortoise bob;
	int* pattern = bob.getPattern();
	int length = bob.getPatternLength();
	for (int i = 0; i < length; i++){
		cout << pattern[i] << ", ";
	}
	cout << endl;
}