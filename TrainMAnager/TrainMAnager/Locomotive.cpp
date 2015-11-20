#include "Locomotive.h"


Locomotive::Locomotive()
{
	max_weight_i = 0;
	power_i = 0;
}

Locomotive::Locomotive(std::string name_string, int weight_i, int max_speed_i, int max_weight_f_i, int power_f_i) : Wagon(name_string, weight_i, max_speed_i)
{
	max_weight_i = max_weight_f_i;
	power_i = power_f_i;
}


Locomotive::~Locomotive()
{
}


// return maximum weight
int Locomotive::getMaxWeight() const
{
	return max_weight_i;
}


// return power of the locomotive
int Locomotive::getPower() const
{
	return power_i;
}

void Locomotive::getStatus() const
{
	Wagon::getStatus();
	std::cout << "Max weight: " << getMaxWeight() << "kg" << std::endl;
	std::cout << "Power of locomotive: " <<getPower() << "kw" << std::endl;
}
