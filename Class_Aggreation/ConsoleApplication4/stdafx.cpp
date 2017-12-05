// stdafx.cpp : Ö»°üÀ¨±ê×¼°üº¬ÎÄ¼þµÄÔ´ÎÄ¼þ
// ConsoleApplication4.pch ½«×÷ÎªÔ¤±àÒëÍ·
// stdafx.obj ½«°üº¬Ô¤±àÒëÀàÐÍÐÅÏ¢

#include "stdafx.h"
#include <iostream>
using namespace std;
// TODO: ÔÚ STDAFX.H ÖÐÒýÓÃÈÎºÎËùÐèµÄ¸½¼ÓÍ·ÎÄ¼þ£¬
//¶ø²»ÊÇÔÚ´ËÎÄ¼þÖÐÒýÓÃ


const float FuelGauge::report()
{
  cout << "Fuel: " << fuel << endl;
  return fuel;
}

void FuelGauge::fill(float num)
{
  fuel += num;
  cout << "Fuel:" << fuel << endl;
}

void FuelGauge::consume(float num)
{
  fuel -= num;
}

FuelGauge::FuelGauge()
{
  fuel = 15.0;
}

Odometer::Odometer()
{
  mileage = 0;
}

const int Odometer::report()
{
  cout << "Now we run " << mileage << endl;
  return mileage;
}

void Odometer::move(int mile)
{
  mileage += mile;
}



