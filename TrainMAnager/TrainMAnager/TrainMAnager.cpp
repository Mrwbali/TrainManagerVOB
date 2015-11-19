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
	std::vector<std::shared_ptr< Wagon >> boc_cars;
	
	boc_cars.push_back(std::shared_ptr<Wagon>(new Cistern(1500, 250, 100, false)));
	
	boc_cars.at(0)->getStatus();
	
	return 0;
}

