/*
 * CPU.cpp
 *
 *  Created on: Apr 25, 2019
 *      Author: sajidshah960
 */

#include "CPU.h"

CPU::CPU() : alu () , cu () 
{

}
CPU :: CPU ( int a , int s , int r ,int sr , double clk ) : alu ( a , s , r , sr ) , cu ( clk )
{ 

}

ALU CPU::getAlu(){
	return alu;
}

ControlUnit CPU :: getCu ()
{
	return cu ;
}



CPU::~CPU() 
{
}

