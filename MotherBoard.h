/*
 * MotherBoard.h
 *
 *  Created on: Apr 25, 2019
 *      Author: sajidshah960
 */

#ifndef MOTHERBOARD_H_
#define MOTHERBOARD_H_
#include "MainMemory.h"
#include "Port.h"
class MotherBoard : public Port , public MainMemory
{
	MainMemory mm ;
	Port *ports ;
public:
	MotherBoard();
	~MotherBoard();
};

#endif /* MOTHERBOARD_H_ */
