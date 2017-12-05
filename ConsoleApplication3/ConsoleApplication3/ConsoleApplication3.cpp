// ConsoleApplication3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "PatientAccount.h"
#include <iostream>
#include <string>
using namespace std;

void PatientAccount::insert(accout oneaccount)
{
  myaccount.push_back(oneaccount);
  for (int i=0;i<myaccount.size();i++)
    {
      cout << "money:" << myaccount[i].money << endl;
      cout << "date:" << myaccount[i].date << endl;
    }
}

void PatientAccount::list() const
{
    for (int i=0;i<myaccount.size();i++)
    {
      cout << "money:" << myaccount[i].money << endl;
      cout << "date:" << myaccount[i].date << endl;
    }
}

void Surgery::update(string sname, float price)
{
  for (int i=0;i<sizeof(myaccout);i++)
    {
      if( myaccout[i].name == sname)
        myaccout[i].money = price;
    }
}

void Surgery::insert(string sname, float price)
{
	for (int i = 0; i < 10; i++)
	{
		if (myaccout[i].name == "")
		{

			myaccout[0].name = sname;
			myaccout[0].money = price;
		}
	}
}

void Surgery::display()
{
  for (int i=0;i<sizeof(myaccout);i++)
    {
      cout << "Name:" << myaccout[i].name << endl;
      cout << "Money:" << myaccout[i].money << endl;
    }
}
Surgery su;
PatientAccount pa;
int main()
{
  cout << "Select Your Option" << endl;
  cout << "1.Add Surgery" << endl;
  cout << "2.Add Pharmacy" << endl;
  cout << "3.Display Patient Account" << endl;
  cout << "4.Patient buy Surgery" << endl;
  cout << "5.Patient buy Pharmacy" << endl;
  char choice;
  cin >> choice;
  cin.ignore();
  switch (choice)
  {
  case '1':
  {
	  cout << "Input name:" << endl;
	  string name;
	  getline(cin, name);
	  cout << "Input money" << endl;
	  float money;
	  cin >> money;
	  cin.ignore();
	  su.insert(name, money);
	  break;
  }
  case '2':
  {
	  cout << "Not Implemented yet!" << endl;
	  break;
  }
  case '3':
  {
	  pa.list();
	  break;
  }
  case '4':
  {
	  cout << "Input date:" << endl;
	  string date;
	  getline(cin, date);
	  cout << "Input money" << endl;
	  float money;
	  cin >> money;
	  cin.ignore();
	  accout m;
	  m.date = date;
	  m.money = money;
	  pa.insert(m);
	  break;
  }
  };
  main();
    };
