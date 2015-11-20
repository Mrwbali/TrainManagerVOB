#include "Cistern.h"


Cistern::Cistern() : BoxCar()
{
	toxic_b = false;
}

Cistern::Cistern(std::string name_string, int weight_i, int max_speed_i, int max_load_i, bool toxic_f_b) : BoxCar(name_string, weight_i, max_speed_i, max_load_i)
{
	toxic_b = toxic_f_b;
}

Cistern::~Cistern()
{
}


// //return true if cistern is for toxic
bool Cistern::getToxic() const
{
	return toxic_b;
}

void Cistern::getStatus() const
{
	BoxCar::getStatus();
	if (getToxic())
	{
		std::cout << "Toxic: " << "Yes" << std::endl;
	}
	else
	{
		std::cout << "Toxic: " << "NO" << std::endl;
	}
}
