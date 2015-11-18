#include "ElectricLocomotive.h"


ElectricLocomotive::ElectricLocomotive() : Locomotive()
{
	using_type_of_power_system = ACUMULATOR;
}

ElectricLocomotive::ElectricLocomotive(int weight_i, int max_speed_i, int max_weight_i, int power_i, type_of_power_system power) : Locomotive(weight_i, max_speed_i, max_weight_i, power_i)
{
	using_type_of_power_system = power;
}


ElectricLocomotive::~ElectricLocomotive()
{
}

// return using type of power system
ElectricLocomotive::type_of_power_system ElectricLocomotive::getUsingPowerSystem() const
{
	return using_type_of_power_system;
}
