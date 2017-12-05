#pragma once
#include "stdafx.h"
#ifndef CAR_H
#define CAR_H
class Car
{
private:
	FuelGauge myfuel;
	Odometer mymeter;
public:
	Car();
	void run(int);
	void fillfuel(float);
};
#endif // !CAR_H
