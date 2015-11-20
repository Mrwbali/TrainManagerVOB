// TrainMAnager.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include  <vector>
#include <memory>
#include "AllWagons.h"


int _tmain(int argc, _TCHAR* argv[])
{	
	std::string command_string;

	std::vector<std::shared_ptr< Wagon >> train_cars;

	int max_train_speed_i = 10000;
	train_cars.push_back(std::shared_ptr<Wagon>(new MotorLocomotive("T211", 50000, 40, 118, 147, MotorLocomotive::ELECTRIC)));

	train_cars.push_back(std::shared_ptr<Wagon>(new Cistern("Zacs", 22700, 40, 83000, false)));
	
	train_cars.push_back(std::shared_ptr<Wagon>(new Closed("Ibbhps 25", 17000, 70, 1800, true)));

	for (int i = 0; i < train_cars.size(); i++)
	{	
		train_cars.at(i)->getStatus();

		std::cout << "--------------------------" << std::endl;

		if (train_cars.at(i)->getMaxSpeed() < max_train_speed_i)
		{
			max_train_speed_i = train_cars.at(i)->getMaxSpeed();
		}

	}

	std::cout << "Maximalni rychlost soustavy je: " << max_train_speed_i << " km/h" << std::endl;

	std::cin >> command_string;

	return 0;
}

