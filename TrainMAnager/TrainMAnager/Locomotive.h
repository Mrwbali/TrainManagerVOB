#pragma once
#include "Wagon.h"
class Locomotive :
	public Wagon
{
public:

	Locomotive();

	Locomotive(int weight_i, int max_speed_i, int max_weight_f_i, int power_f_i);
	
	virtual ~Locomotive();

protected:

	int max_weight_i;

	int power_i;

public:

	// return maximum weight
	int getMaxWeight() const;

	// return power of the locomotive
	int getPower() const;
};

