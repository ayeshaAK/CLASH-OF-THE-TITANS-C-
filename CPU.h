/*
 * CPU.h
 *
 *  Created on: Apr 25, 2019
 *      Author: sajidshah960
 */

#ifndef CPU_H_
#define CPU_H_
#include "ALU.h"
#include "ControlUnit.h"

class CPU : public ALU , public ControlUnit 
{
	ALU alu ;
	ControlUnit cu ;
public:
	CPU();
	CPU ( int , int , int , int , double ) ;
	ALU getAlu();
	ControlUnit getCu() ;
	~CPU();
};

#endif /* CPU_H_ */
