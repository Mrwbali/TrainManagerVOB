#include "SleepingCar.h"


SleepingCar::SleepingCar() : Personal()
{
	coupe_b = false;
}

SleepingCar::SleepingCar(std::string name_string, int weight_i, int max_speed_i, int places_to_seat_i, bool coupe_f_b) : Personal(name_string, weight_i, max_speed_i, places_to_seat_i)
{
	coupe_b = coupe_f_b;
}

SleepingCar::~SleepingCar()
{
}

//return if there is coupes or openspace
bool SleepingCar::getCoupe() const
{
	return coupe_b;
}

void SleepingCar::getStatus() const
{
	Personal::getStatus();
	if (getCoupe())
	{
		std::cout << "Coupe: " << "YES" << std::endl;
	}
	else
	{
		std::cout << "Coupe: " << "NO" << std::endl;
	}
}
