/*
 * Statistics.cpp
 *
 *  Created on: Jun 29, 2013
 *      Authors: Icaro Mota
 *      		 Gabriel Naves
 */


#include <iostream>

#include "../include/Statistics.h"

void Statistics::survive() {
	std::cout << "Number of cells revived: " << ++survivors << std::endl;
}

void Statistics::kill() {
	std::cout << "Number of cells killed: " << ++killed << std::endl;
}

void Statistics::Update(int event) {
	if (event == 1) survive();
	else if (event == 0) kill();
	else std::cout << "ERROR! Invalid event!" << std::endl;
}
