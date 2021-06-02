/*
Author: Carlos Caballero
Course: csci 136
Instructor: Katherine Howitt
Assigment: Project 3 Hare header file

This program will be the header file for the Hare.
*/

#pragma once

#ifndef HARE_H // header guard
#define HARE_H

class Hare{
	public:
		Hare(); // Default constructor.
		Hare(int* pattern, int size, int position); // Non-default constructor (holds parameters)
		~Hare(); // Releases dynamically allocated memory.

		int getPosition() const; // Constant because it is an accessor.
		void setPosition(int newPosition);
		int* getPattern() const; // return pattern as an array.
		int getPatternLength() const;
		void move(); //change the current position, depending on move pattern.
	
	private:
		const int lenght; //the size of the array is always const
		int* pattern;
		int position;
};
#endif