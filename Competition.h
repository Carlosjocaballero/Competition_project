/*
Author: Carlos Caballero
Course: csci 136
Instructor: Katherine Howitt
Assignment: Project 3 Competition header file

This program will be the competition class header file
*/

#include "Hare.h"
#include "Tortoise.h"
#include "Road.h"

#pragma once 

#ifndef COMPETITION_H
#define COMPETITION_H

class Competition{
	public:
		Competition();
		Competition(Hare* rabbit, Tortoise* tor, int length);
		~Competition();
		void start();
	private:
		Hare* rabbit;
		Tortoise* tor;
		Road* rd;
};

#endif