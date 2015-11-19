#include "DiningCar.h"


DiningCar::DiningCar() :Personal()
{
	Dining_car_type = CAFFE;
}


DiningCar::DiningCar(int weight_i, int max_speed_i,int places_to_seat_i , type car_type) : Personal(weight_i,max_speed_i,places_to_seat_i)
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
