// stdafx.cpp : ֻ������׼�����ļ���Դ�ļ�
// More_class.pch ����ΪԤ����ͷ
// stdafx.obj ������Ԥ����������Ϣ

#include "stdafx.h"

// TODO: �� STDAFX.H �������κ�����ĸ���ͷ�ļ���
//�������ڴ��ļ������



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
