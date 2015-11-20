#include "DiningCar.h"


DiningCar::DiningCar() :Personal()
{
	Dining_car_type = CAFFE;
}


DiningCar::DiningCar(std::string name_string, int weight_i, int max_speed_i, int places_to_seat_i, type car_type) : Personal(name_string, weight_i, max_speed_i, places_to_seat_i)
{
	Dining_car_type = car_type;
}

DiningCar::~DiningCar()
{
}

//return type of dining carspecifed by type
DiningCar::type DiningCar::getType() const
{
	return Dining_car_type;
}

void DiningCar::getStatus() const
{	
	Personal::getStatus();
	switch (Dining_car_type)
	{
	case CAFFE:
		std::cout << "Dining car type: " << "Caffe" << std::endl;
		break;
	case RESTAURANT: 
		std::cout << "Dining car type: " << "Restaurant" << std::endl;
		break;
	case BISTRO:
		std::cout << "Dining car type: " << "Bistro" << std::endl;
		break;
	default: 
		break;
	}
}
