#pragma once
#include "Personal.h"
class SleepingCar :
	Personal
{

public:

	SleepingCar();

	SleepingCar(int weight_i, int max_speed_i, int places_to_seat_i, bool coupe_b);

	virtual ~SleepingCar();

protected:

	bool coupe_b;

public:

	//return if there is coupes or openspace
	bool getCoupe() const;

};

