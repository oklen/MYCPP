// stdafx.cpp : Ö»°üÀ¨±ê×¼°üº¬ÎÄ¼şµÄÔ´ÎÄ¼ş
// More_class.pch ½«×÷ÎªÔ¤±àÒëÍ·
// stdafx.obj ½«°üº¬Ô¤±àÒëÀàĞÍĞÅÏ¢

#include "stdafx.h"

// TODO: ÔÚ STDAFX.H ÖĞÒıÓÃÈÎºÎËùĞèµÄ¸½¼ÓÍ·ÎÄ¼ş£¬
//¶ø²»ÊÇÔÚ´ËÎÄ¼şÖĞÒıÓ



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
