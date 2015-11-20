#include "Wagon.h"


Wagon::Wagon()
{	
	name_string = "NO NAME";

	weight_i = 0;
	
	max_speed_i = 0;
	
}

Wagon::Wagon(std::string name_f_string, int weight, int max_speed)
{	
	name_string = name_f_string;

	weight_i = weight;

	max_speed_i = max_speed;
}

Wagon::~Wagon()
{
}

std::string Wagon::getName() const
{
	return name_string;
}

//return weight of wagon
int Wagon::getWeight() const
{
	return weight_i;
}

//return maximum speed of wagon
int Wagon::getMaxSpeed() const
{
	return max_speed_i;
}

void Wagon::getStatus() const
{
	std::cout << "Name: " << getName() << std::endl;
 	std::cout << "Weight: " << getWeight() << "kg" << std::endl;
	std::cout << "Max speed: " << getMaxSpeed() << "km/h" << std::endl;
}
