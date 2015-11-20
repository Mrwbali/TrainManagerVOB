#pragma once
#include "BoxCar.h"
class Cistern :
 	public BoxCar
{
public:

	Cistern();

	Cistern(std::string name_string, int weight_i, int max_speed_i, int max_load_i, bool toxic_f_b);

	virtual ~Cistern();

private:

	bool toxic_b;

public:

	//return true if cistern is for toxic
	bool getToxic() const;

	//prints status
	virtual void getStatus() const;

};

