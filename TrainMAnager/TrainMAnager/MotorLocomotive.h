#pragma once
#include "Locomotive.h"
class MotorLocomotive :
	public Locomotive
{
public:
	enum trans
	{HYDRAULIC, ELECTRIC
	};

	MotorLocomotive();

	MotorLocomotive(std::string name_string, int weight_i, int max_speed_i, int max_weight_i, int power_i, trans transmission_f_trans);

	virtual ~MotorLocomotive();

private:

	trans transmission;

public:

	// //return type of transmission
	trans getTransmission() const;

	//prints status
	virtual void getStatus() const;
};

