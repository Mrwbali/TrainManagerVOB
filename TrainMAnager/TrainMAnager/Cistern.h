#pragma once
#include "BoxCar.h"
class Cistern :
	BoxCar
{
public:

	Cistern();

	Cistern(int weight_i, int max_speed_i, int max_load_i, bool toxic_f_b);

	virtual ~Cistern();

private:

	bool toxic_b;

public:

	// //return true if cistern is for toxic
	bool getToxic() const;

};

