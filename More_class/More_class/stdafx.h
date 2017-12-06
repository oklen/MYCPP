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


// TODO:  �ڴ˴����ó�����Ҫ������ͷ��?
#ifndef BANK_H
#define BANK_H
class Base_bank
{
 private:
  int ndeposite;
  int nwithdrawals;
  float arate;
  float mcharge;
protected:
        float banlance;
 public:
  Base_bank(float ban, float rate)
    {
      banlance = ban;
      nwithdrawals = rate;
      ndeposite = 0;
    }

  virtual void deposite(float ban)
  {
    banlance += ban;
    ndeposite += 1;
  }

  virtual void withdraw(float drawback)
  {
    banlance -= drawback;
    nwithdrawals += 1;
  }

  virtual void calcint()
  {
    float mir = arate / 12;
    banlance += banlance * mir;
  }
  virtual void monthlyProc()
  {
    banlance -= mcharge;
    calcint();
    nwithdrawals = 0;
    ndeposite = 0;
    mcharge = 0.0;
  }
  void show()
  {
    cout << "banlance:" << banlance << endl;
    cout << "deposite:" << ndeposite << endl;
    cout << "withdraw" << nwithdrawals << endl;
  }

  float getbanlance()
  {
    return banlance;
  }

};

class Saving_account : public Base_bank
{
 private:
  int status;
 public:
 Saving_account(float banlance, float rate):Base_bank(banlance,  rate)
    {
      if (banlance > 25.0)
        status = 1;
      else
        status = 0;
    }
  void withdraw(float drawback);
  void deposite(float dep);
  void monthlyProc();
};

class Checking_account : public Base_bank
{
 private:
  int status;
 public:
 Checking_account(float blance, float rate):Base_bank(blance, rate)
    {
      if (banlance > 25.0)
        status = 1;
      else
        status = 0;
    }
  void withdraw(float drawback);
};
#endif
