#include "Open.h"




Open::Open()
{
	parititon_i = 0;
}

Open::Open(int weight_i, int max_speed_i, int max_load_i, int partition_f_i) : BoxCar(weight_i, max_speed_i, max_load_i)
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
