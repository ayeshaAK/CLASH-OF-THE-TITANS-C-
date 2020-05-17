/*
 * MainMemory.cpp
 *
 *  Created on: Apr 25, 2019
 *      Author: sajidshah960
 */

#include "MainMemory.h"

MainMemory::MainMemory(): capacity ( 0 ) , technologyType ( "" ) {

}
MainMemory :: MainMemory ( int c , string tech ) : capacity ( c ) , technologyType ( tech)
{
	
}

int MainMemory::getCapacity() const {
	return capacity;
}

void MainMemory::setCapacity(int capacity) {
	this->capacity = capacity;
}

string MainMemory::getTechnologyType() const {
	return technologyType;
}

void MainMemory::setTechnologyType(string technologyType) {
	this->technologyType = technologyType;
}

MainMemory::~MainMemory() {
	// TODO Auto-generated destructor stub
}

