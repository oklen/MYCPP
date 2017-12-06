// More_class.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
  Saving_account save(30,0.1);
  Checking_account check(30, 0.1);
  while (1)
    {
      cout << "Enter you Choice" << endl;
      cout << "1.Saving_account deposite"<< endl;
      cout << "2.Saving_account withdraw" << endl;
      cout << "3.Saving_accout MonthlyProc" << endl;
      char choice;
      cin >> choice;
      switch (choice){
      case '1':{
        cout << "Saving how much? :";
        float input;
        cin >> input;
        cin.ignore();
        save.deposite(input);
        break;
      }
      case '2':
        {
          cout << "Withdraw how much? :";
          float input;
          cin >> input;
          save.withdraw(input);
          break;
        }
      case '3':
        {
          save.monthlyProc();
          break;
        }
      };
    }
    return 0;
}

