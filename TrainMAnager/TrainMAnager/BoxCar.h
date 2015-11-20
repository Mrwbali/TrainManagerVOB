#pragma once
#include "Wagon.h"
class BoxCar :
	public Wagon
{
public:

	BoxCar();

	BoxCar(std::string name_f_string, int weight_i, int max_speed_i, int max_load_f_i);

	virtual ~BoxCar();

protected:

	int max_load_i;

public:

	// return max cargo load
	int getMaxLoad() const;

	//prints status
	virtual void getStatus() const;

};

