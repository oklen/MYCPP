#include "Car.h"
#include <iostream>
using namespace std;

void Car::fillfuel(float fuels)
{
	if ((fuels + myfuel.report() > 15))
	{
		cout << "Too much fuel fill Cancel" << endl;
	}
	else
	{
		myfuel.fill(fuels);
	}
}

void Car::run(int mile)
{
	if ((myfuel.report() - (float)(mile) / 24) >= 0)
	{
		myfuel.consume((float)(mile) / 24);
		mymeter.move(mile);
		myfuel.report();
		mymeter.report();
	}
	else
	{
		cout << "We don't have so much fuel" << endl;
	}
}

Car::Car()
{
	cout << "Car Init" << endl;
}