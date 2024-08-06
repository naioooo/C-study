#pragma once
#include "Vehicle.h"

class Bike : public Vehicle
{
public:
	Bike(const string& n);
	~Bike();
	void Move()const override;

};