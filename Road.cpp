/*
Author: Carlos Caballero
Course: csci 136
Instructor: Katherine Howitt
Assignemnt: Project 3 Road source file

This program is the source file of Road
*/

#include "Road.h"
#include <cstddef>

Road::Road() : length(70)
{
	block = new char[length];
	clear();
}

Road::Road(int size) : length(size > 0 ? size : 70)
{
	block = new char[length];
	clear();
}

void Road::clear(){
	for (int i = 0; i < length; i++){
		block[i] = ' ';
	}
}

void Road::mark(int idx, char ch){
	block[idx] = ch;
}

int Road::getLastBlock() const{
	return length-1; // Since blocks starts at 0, the last block will be -1.
}

char* Road::toString() const{
	return block;
}

Road::~Road()
{
	delete[] block;
	block = 0;
}

