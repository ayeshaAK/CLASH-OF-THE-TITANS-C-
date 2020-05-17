/*
 * Computer.h
 *
 *  Created on: Apr 25, 2019
 *      Author: sajidshah960
 */

#ifndef COMPUTER_H_
#define COMPUTER_H_
#include "CPU.h"
#include "MotherBoard.h"
#include "PhysicalMemory.h"

class Computer : public MotherBoard , public PhysicalMemory , public CPU 
{
	CPU cpu ;
	MotherBoard mb ;
	PhysicalMemory pm ;
 	
public:
	Computer();
	~Computer();
};

#endif /* COMPUTER_H_ */
