#pragma once
#include "Wagon.h"
class Personal :
	Wagon
{
public:

	Personal();

	Personal(int weight_i, int max_speed_i, int PlacesToSeat);

	virtual ~Personal();

protected:

	int places_to_seat_i;

public:
	
	// return number of places to seat
	int GetPlacesToSeat() const;

};

