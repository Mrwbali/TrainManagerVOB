#include "ElectricLocomotive.h"


ElectricLocomotive::ElectricLocomotive() : Locomotive()
{
	using_type_of_power_system = ACUMULATOR;
}



ElectricLocomotive::~ElectricLocomotive()
{
}

// // return using type of power system
ElectricLocomotive::type_of_power_system ElectricLocomotive::getUsingPowerSystem() const
{
	return using_type_of_power_system;
}
