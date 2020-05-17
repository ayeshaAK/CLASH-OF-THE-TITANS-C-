/*
 * PhysicalMemory.cpp
 *
 *  Created on: Apr 25, 2019
 *      Author: sajidshah960
 */

#include "PhysicalMemory.h"

PhysicalMemory::PhysicalMemory() : capacity ( 0 ) {
	// TODO Auto-generated constructor stub

}
PhysicalMemory :: PhysicalMemory ( int c ) : capacity ( c )
{
	
}

int PhysicalMemory::getCapacity() const {
	return capacity;
}

void PhysicalMemory::setCapacity(int capacity) {
	this->capacity = capacity;
}

PhysicalMemory::~PhysicalMemory() {
	// TODO Auto-generated destructor stub
}

