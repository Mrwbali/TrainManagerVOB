#include "SteamLocomotive.h"


SteamLocomotive::SteamLocomotive() : Locomotive()
{
	water_tank_i = 0;

	coal_stock_i = 0;
}

SteamLocomotive::SteamLocomotive(std::string name_string, int weight_i, int max_speed_i, int max_weight_i, int power_i, int water_tank_f_i, int coal_stock_f_i) : Locomotive(name_string, weight_i, max_speed_i, max_weight_i, power_i)
{
	water_tank_i = water_tank_f_i;
	
	coal_stock_i = coal_stock_f_i;
}

SteamLocomotive::~SteamLocomotive()
{
}


// return volume of water tank
int SteamLocomotive::getWaterTank() const
{
	return coal_stock_i;
}


// get capacity of coal stock
int SteamLocomotive::getCoalStock() const
{
	return coal_stock_i;
}

void SteamLocomotive::getStatus() const
{
	Locomotive::getStatus();

	std::cout << "Size of coal stock: " << getCoalStock() << "kg" << std::endl;
}
