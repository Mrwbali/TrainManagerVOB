#pragma once
#include "Wagon.h"
class Personal :
	public Wagon
{
public:

	Personal();

	Personal(std::string name_string, int weight_i, int max_speed_i, int PlacesToSeat);

	virtual ~Personal();

protected:

	int places_to_seat_i;

public:
	
	// return number of places to seat
	int getPlacesToSeat() const;

	//prints status
	virtual void getStatus() const;

};

