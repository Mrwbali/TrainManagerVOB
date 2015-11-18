#include "MotorLocomotive.h"


MotorLocomotive::MotorLocomotive()
{
	transmission = HYDRAULIC;
}

MotorLocomotive::MotorLocomotive(int weight_i, int max_speed_i, int max_weight_i, int power_i, trans transmission_f_trans) : Locomotive(weight_i,max_speed_i,max_weight_i,power_i)
{
	transmission = transmission_f_trans;
}

MotorLocomotive::~MotorLocomotive()
{
}


// //return type of transmission
MotorLocomotive::trans MotorLocomotive::getTransmission() const
{
	return transmission;
}
