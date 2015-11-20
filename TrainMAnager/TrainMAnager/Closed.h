#pragma once
#include "BoxCar.h"
class Closed :
	public BoxCar
{
public:

	Closed();

	Closed(std::string name_string, int weight_i, int max_speed_i, int max_load_i, bool air_conditioning_f_b);

	virtual ~Closed();

private:

	bool airConditioning;

public:

	// return if there is air conditioning unit
	bool getAirConditioning() const;

	//prints status
	virtual void getStatus() const;
};

