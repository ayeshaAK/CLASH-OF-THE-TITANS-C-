/*
 * ALU.h
 *
 *  Created on: Apr 25, 2019
 *      Author: sajidshah960
 */

#ifndef ALU_H_
#define ALU_H_
#include <iostream>
using namespace std ;

class ALU
{
	int noOfAdders , noOfSubtractors , noOfRegisters , sizeOfRegisters ;

public:
	ALU();
	ALU ( int , int , int ,  int ) ;
	~ALU();
	int getNoOfAdders() const;
	void setNoOfAdders(int noOfAdders);
	int getNoOfRegisters() const;
	void setNoOfRegisters(int noOfRegisters);
	int getNoOfSubtractors() const;
	void setNoOfSubtractors(int noOfSubtractors);
	int getSizeOfRegisters() const;
	void setSizeOfRegisters(int sizeOfRegisters);
};

#endif /* ALU_H_ */
