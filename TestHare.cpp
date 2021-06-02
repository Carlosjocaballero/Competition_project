/*
Author: Carlos Caballero
Course: csci 136
Instructor: Katherine Howitt
Assignment: Lab3 Test Hare

This program will test the Hare class
*/

#include "Hare.h"
#include <iostream>
using namespace std;

int main(){
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
}