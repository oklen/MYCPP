// stdafx.cpp : 只包括标准包含文件的源文件
// More_class.pch 将作为预编译头
// stdafx.obj 将包含预编译类型信息

#include "stdafx.h"

// TODO: 在 STDAFX.H 中引用任何所需的附加头文件，
//而不是在此文件中引�



void Saving_account::withdraw(float drawback)
{
  float ban = getbanlance();
  if ((ban - drawback) < 0)
    {cout << "No Such Many Money,Activatiy Reject!" << endl;
      return ;}
  else if ((ban - drawback) < 25)
    status = 0;
  Base_bank::withdraw(drawback);
  show();
}

void Saving_account::deposite(float dep)
{
  Base_bank::deposite(dep);
  show();
}

void Saving_account::monthlyProc()
{
  Base_bank::monthlyProc();
  show();
}

void Checking_account::withdraw(float drawback)
{
  Base_bank::withdraw(drawback);
  show();
}
