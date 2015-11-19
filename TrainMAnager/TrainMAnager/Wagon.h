#pragma once
class Wagon
{
public:

	Wagon();

	Wagon(int weight_i, int max_speed_i);
	
	virtual ~Wagon();

protected: 

	int weight_i;

	int max_speed_i;


public:

	//return weight of wagon
	int GetWeight() const;

	//return maximum speed of wagon
	int GetMaxSpeed() const;

};

