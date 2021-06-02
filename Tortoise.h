/*
Author: Carlos Caballero
Course: csci 136
Instructor: Katherine Howitt
Assignemnt: Project 3 Tortoise Header File

This program will create the header file for the tortoise
*/
#pragma once

#ifndef TORTOISE_H // include header guard
#define TORTOISE_H

class Tortoise{
	public:
		Tortoise(); //default constructor
		Tortoise(int* pattern, int size, int position); // Different patter from default patter, size of array, position it begins from
		~Tortoise(); //release allocated memory

		int getPosition() const;
		void setPosition(int NewPosition);
		int* getPattern() const;
		int getPatternLength() const;
		void move();
	
	private:
		const int length;
		int* pattern;
		int position;
};
#endif