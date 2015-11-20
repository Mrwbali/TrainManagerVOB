#pragma once
#include <iostream>
#include <string>
#include  <iomanip>

class Wagon
{
public:

	Wagon();

	Wagon(std::string name_f_string, int weight_i, int max_speed_i);
	
	virtual ~Wagon();

protected: 

	std::string name_string;

	int weight_i;

	int max_speed_i;


public:

	//return name of wagon
	std::string getName() const;
	
	//return weight of wagon
	int getWeight() const;

	//return maximum speed of wagon
	int getMaxSpeed() const;

	//prints status
	virtual void getStatus() const;

};

