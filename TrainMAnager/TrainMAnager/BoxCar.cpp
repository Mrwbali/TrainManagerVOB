#include "BoxCar.h"


BoxCar::BoxCar()
{
	max_load_i = 0;
}

BoxCar::BoxCar(std::string name_string, int weight_i, int max_speed_i, int max_load_f_i) : Wagon(name_string, weight_i, max_speed_i)
{
	max_load_i = max_load_f_i;
}

BoxCar::~BoxCar()
{
}


// return max cargo load
int BoxCar::getMaxLoad() const
{
	return max_load_i;
}

void BoxCar::getStatus() const
{	
	Wagon::getStatus();
	
	std::cout << "Max load:" << getMaxLoad() << "kg" << std::endl;
}
