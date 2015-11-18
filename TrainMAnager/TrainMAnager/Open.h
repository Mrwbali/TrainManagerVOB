#pragma once
#include "BoxCar.h"
class Open :
	BoxCar
{
public:

	Open();

	Open(int weight_i, int max_speed_i, int max_load_i, int partition_f_i);

	virtual ~Open();

private:

	int parititon_i;

public:

	//return number of partition
	int getPartitiom() const;
};

