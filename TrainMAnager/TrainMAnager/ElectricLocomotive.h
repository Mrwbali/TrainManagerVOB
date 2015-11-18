#pragma once
#include "Locomotive.h"
class ElectricLocomotive :
	Locomotive
{
public:

	enum type_of_power_system
	{
		AC, DC, MULTISYSTEM, ACUMULATOR
	};

	ElectricLocomotive();

	ElectricLocomotive(int weight_i, int max_speed_i, int max_weight_i, int power_i, type_of_power_system power);

	virtual ~ElectricLocomotive();


private:

	type_of_power_system using_type_of_power_system;

public:

	// return using type of power system
	type_of_power_system getUsingPowerSystem() const;

};

