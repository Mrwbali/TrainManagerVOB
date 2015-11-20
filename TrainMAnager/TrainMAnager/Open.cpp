#include "Open.h"




Open::Open()
{
	parititon_i = 0;
}

Open::Open(std::string name_string, int weight_i, int max_speed_i, int max_load_i, int partition_f_i) : BoxCar(name_string, weight_i, max_speed_i, max_load_i)
{
	parititon_i = partition_f_i;
}

Open::~Open()
{
}

int Open::getPartitiom() const
{
	return parititon_i;
}

void Open::getStatus() const
{
	BoxCar::getStatus();

	std::cout << "Number of partition: " << getPartitiom() << std::endl;
}
