#include "Closed.h"


Closed::Closed() : BoxCar()
{
	airConditioning = false;
}

Closed::Closed(std::string name_string, int weight_i, int max_speed_i, int max_load_i, bool air_conditioning_f_b) : BoxCar(name_string, weight_i, max_speed_i, max_load_i)
{
	airConditioning = air_conditioning_f_b;
}

Closed::~Closed()
{
}


// return if there is air conditioning unit
bool Closed::getAirConditioning() const
{
	return airConditioning;
}

void Closed::getStatus() const
{	
	BoxCar::getStatus();

	if(getAirConditioning())
	{
		std::cout << "Air conditioning: " << "YES" << std::endl;
	}
	else
	{
		std::cout << "Air conditioning: " << "NO" << std::endl;
	}
	
}
