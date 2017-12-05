// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>
using namespace std;

// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
class FuelGauge
{
 private:
  float fuel;
 public:
  FuelGauge();
  const float report();
  void fill(float);
  void consume(float);
};

class Odometer
{
 private:
  int mileage;
 public:
	 Odometer();
  const int report();
  void move(int);
};


