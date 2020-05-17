/*
 * ControlUnit.cpp
 *
 *  Created on: Apr 25, 2019
 *      Author: sajidshah960
 */

#include "ControlUnit.h"

ControlUnit::ControlUnit() : clock ( 0.0 ) 
{

}
ControlUnit :: ControlUnit ( double clk ) : clock ( clk ) 
{

}
double ControlUnit::getClock() const {
	return clock;
}

void ControlUnit::setClock(double clock) {
	this->clock = clock;
}

ControlUnit::~ControlUnit() {
	// TODO Auto-generated destructor stub
}

