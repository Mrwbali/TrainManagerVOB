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
	std::string wwww;
	std::vector<std::shared_ptr< Wagon >> train_cars;
	
	train_cars.push_back(std::shared_ptr<Wagon>(new MotorLocomotive("T211", 50000, 40, 118, 147, MotorLocomotive::ELECTRIC)));

	train_cars.push_back(std::shared_ptr<Wagon>(new Cistern("Zacs", 22700, 40, 83000, false)));
	
	train_cars.push_back(std::shared_ptr<Wagon>(new Closed("Ibbhps 25", 17000, 70, 1800, true)));

	for (int i = 0; i <= train_cars.size(); i++)
	{	
		std::cout << "i = " << i;
		std::cout << train_cars.size() << std::endl;
		train_cars.at(i)->getStatus();
		std::cout << "--------------------------" << std::endl;
	}
	
	return 0;
}

