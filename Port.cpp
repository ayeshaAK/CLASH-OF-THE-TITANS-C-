/*
 * Port.cpp
 *
 *  Created on: Apr 25, 2019
 *      Author: sajidshah960
 */

#include "Port.h"

Port::Port() : type ( "" ) , baud_rate ( 0 )
 {
	// TODO Auto-generated constructor stub

}
Port :: Port ( string t , int br ) : type ( t ) , baud_rate ( br ) 
{

}

int Port::getBaudRate() const {
	return baud_rate;
}

void Port::setBaudRate(int baudRate) {
	baud_rate = baudRate;
}

string Port::getType() const {
	return type;
}

void Port::setType(string type) {
	this->type = type;
}

Port::~Port() {
	// TODO Auto-generated destructor stub
}

