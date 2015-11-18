#include "Cistern.h"


Cistern::Cistern() : BoxCar()
{
	toxic_b = false;
}

Cistern::Cistern(int weight_i, int max_speed_i, int max_load_i, bool toxic_f_b) : BoxCar(weight_i, max_speed_i, max_load_i)
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
