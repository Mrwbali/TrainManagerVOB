#include "Personal.h"


Personal::Personal() : Wagon()
{
	places_to_seat_i = 0;
}

Personal::Personal(int weight_i, int max_speed_i, int placesToSeat) :Wagon(weight_i, max_speed_i)
{
	places_to_seat_i = placesToSeat;
}

Personal::~Personal()
{
}

// return number of places to seat
int Personal::GetPlacesToSeat() const
{
	return places_to_seat_i;
}
