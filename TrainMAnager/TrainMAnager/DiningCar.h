#pragma once
#include "Personal.h"
class DiningCar : public Personal
{


public:

	enum type
	{
		CAFFE, RESTAURANT, BISTRO
	};

	DiningCar();

	DiningCar(std::string name_string, int weight_i, int max_speed_i, int places_to_seat_i, type cat_type);


	virtual ~DiningCar();

private:

	type Dining_car_type;

public:

	//return type of dining carspecifed by type
	type getType() const;

	//prints status
	virtual void getStatus() const;
};

