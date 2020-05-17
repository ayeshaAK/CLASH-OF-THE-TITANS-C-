/*
 * PhysicalMemory.h
 *
 *  Created on: Apr 25, 2019
 *      Author: sajidshah960
 */

#ifndef PHYSICALMEMORY_H_
#define PHYSICALMEMORY_H_

class PhysicalMemory {
	int capacity ;
public:
	PhysicalMemory();
	PhysicalMemory ( int ) ;
	~PhysicalMemory();
	int getCapacity() const;
	void setCapacity(int capacity);
};

#endif /* PHYSICALMEMORY_H_ */
