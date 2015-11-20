#pragma once
#include "BoxCar.h"
class Open :
	public BoxCar
{
public:

	Open();

	Open(std::string name_string, int weight_i, int max_speed_i, int max_load_i, int partition_f_i);

	virtual ~Open();

private:

	int parititon_i;

public:

	//return number of partition
	int getPartitiom() const;

	//prints status
	virtual void getStatus() const;
};

