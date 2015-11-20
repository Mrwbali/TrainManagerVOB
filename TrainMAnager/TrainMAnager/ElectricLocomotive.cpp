#include "ElectricLocomotive.h"


ElectricLocomotive::ElectricLocomotive() : Locomotive()
{
	using_type_of_power_system = ACUMULATOR;
}

ElectricLocomotive::ElectricLocomotive(std::string name_string, int weight_i, int max_speed_i, int max_weight_i, int power_i, type_of_power_system power) : Locomotive(name_string, weight_i, max_speed_i, max_weight_i, power_i)
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

void ElectricLocomotive::getStatus() const
{
	Locomotive::getStatus();

	switch (using_type_of_power_system)
	{
	case AC: 
		std::cout << "Using type of electric system: " << "AC" << std::endl;
		break;
	case DC: 
		std::cout << "Using type of electric system: " << "DC" << std::endl;
		break;
	case MULTISYSTEM:
		std::cout << "Using type of electric system: " << "Multisystem" << std::endl;
		break;
	case ACUMULATOR: 
		std::cout << "Using type of electric system: " << "Acumulator" << std::endl;
		break;
	default: 
		break;
	}
}
