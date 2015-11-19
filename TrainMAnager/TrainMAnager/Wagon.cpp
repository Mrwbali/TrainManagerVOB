#include "Wagon.h"


Wagon::Wagon()
{
	weight_i = 0;
	max_speed_i = 0;
	
}

Wagon::Wagon(int weight, int max_speed)
{
	weight_i = weight;

	max_speed_i = max_speed;
}

Wagon::~Wagon()
{
}

//return weight of wagon
int Wagon::GetWeight() const
{
	return weight_i;
}

//return maximum speed of wagon
int Wagon::GetMaxSpeed() const
{
	return max_speed_i;
}

