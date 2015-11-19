#pragma once
#include "Locomotive.h"
class SteamLocomotive :
	public Locomotive
{
public:

	SteamLocomotive();

	SteamLocomotive(int weight_i, int max_speed_i, int max_weight_i, int power_i, int water_tank_i, int coal_stock_i);

	virtual ~SteamLocomotive();

private:

	int water_tank_i;

	int coal_stock_i;

public:

	// return volume of water tank
	int getWaterTank() const;

	// get capacity of coal stock
	int getCoalStock() const;
};

