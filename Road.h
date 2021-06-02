/*
Author: Carlos Caballero
Course: csci 136
Instructor: Katherine Howitt
Assignment: Project 3 Road header file

This program will have the header file for the Road class
*/

#pragma once

#ifndef ROAD_H
#define ROAD_H
class Road{
	public:
		Road();
		Road(int size);
		~Road(); // Releases dynamically allocated memory

		void clear(); // set each character in a blocks to be space
		int getLastBlock() const;
		void mark(int idx, char ch);
		char* toString() const;
	private:
		// Block is used to represent the consecutive collection
		// of road blocks. Each block can be a space or occupied by an animal
		char* block;
		const int length; // length is size of the array	
};
#endif