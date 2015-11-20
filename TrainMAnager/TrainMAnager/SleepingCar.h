#pragma once
#include "Personal.h"
class SleepingCar :
	public Personal
{

public:

	SleepingCar();

	SleepingCar(std::string name_string, int weight_i, int max_speed_i, int places_to_seat_i, bool coupe_b);

	virtual ~SleepingCar();

protected:

	bool coupe_b;

public:

	//return if there is coupes or openspace
	bool getCoupe() const;

	//prints status
	virtual void getStatus() const;
};

