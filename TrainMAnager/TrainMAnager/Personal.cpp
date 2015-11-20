#include "Personal.h"


Personal::Personal() : Wagon()
{
	places_to_seat_i = 0;
}

Personal::Personal(std::string name_string, int weight_i, int max_speed_i, int placesToSeat) : Wagon(name_string, weight_i, max_speed_i)
{
	places_to_seat_i = placesToSeat;
}

Personal::~Personal()
{
}

// return number of places to seat
int Personal::getPlacesToSeat() const
{
	return places_to_seat_i;
}

void Personal::getStatus() const
{
	Wagon::getStatus();
	
	std::cout << "Places to seat:" << getPlacesToSeat() << "places" << std::endl;
}
