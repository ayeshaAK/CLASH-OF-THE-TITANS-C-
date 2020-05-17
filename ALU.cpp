/*
 * ALU.cpp
 *
 *  Created on: Apr 25, 2019
 *      Author: sajidshah960
 */

#include "ALU.h"

ALU::ALU() : noOfAdders ( 0 ) , noOfSubtractors ( 0 ) , noOfRegisters ( 0 ) , sizeOfRegisters ( 0 )
{

}
ALU :: ALU ( int a , int s , int r , int sr ) : noOfAdders ( a ) , noOfSubtractors ( s ) , noOfRegisters ( r ) , sizeOfRegisters ( sr ) 
{
	
}

int ALU::getNoOfAdders() const {
	return noOfAdders;
}

void ALU::setNoOfAdders(int noOfAdders) {
	this->noOfAdders = noOfAdders;
}

int ALU::getNoOfRegisters() const {
	return noOfRegisters;
}

void ALU::setNoOfRegisters(int noOfRegisters) {
	this->noOfRegisters = noOfRegisters;
}

int ALU::getNoOfSubtractors() const {
	return noOfSubtractors;
}

void ALU::setNoOfSubtractors(int noOfSubtractors) {
	this->noOfSubtractors = noOfSubtractors;
}

int ALU::getSizeOfRegisters() const {
	return sizeOfRegisters;
}

void ALU::setSizeOfRegisters(int sizeOfRegisters) {
	this->sizeOfRegisters = sizeOfRegisters;
}

ALU::~ALU() {
	// TODO Auto-generated destructor stub
}

