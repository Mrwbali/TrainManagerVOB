#pragma once
#include "BoxCar.h"
class Closed :
	BoxCar
{
public:

	Closed();

	Closed(int weight_i, int max_speed_i, int max_load_i, bool air_conditioning_f_b);

	virtual ~Closed();

private:

	bool airConditioning;

public:

	// return if there is air conditioning unit
	bool getAirConditioning() const;

};

