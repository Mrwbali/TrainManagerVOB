#pragma once
#include <iostream>
#include  <iomanip>
class Wagon
{
public:

	Wagon();

	Wagon(int weight_i, int max_speed_i);
	
	virtual ~Wagon();

protected: 

	int weight_i;

	int max_speed_i;


public:

	//return weight of wagon
	int getWeight() const;

	//return maximum speed of wagon
	int getMaxSpeed() const;

	//prints status
	virtual void getStatus() const;

};

