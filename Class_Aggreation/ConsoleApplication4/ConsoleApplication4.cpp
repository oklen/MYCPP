// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"Car.h"


int main()
{
	Car mycar;
	cout << "Car Running" << endl;
	while (1)
	{
		char choice;
		cout << "Cat Should do?" << endl;
		cout << "1.run how many meils" << endl;
		cout << "2.fill the fuel" << endl;
		cin >> choice;
		cin.ignore();
		switch (choice)
		{
		case '1': {
			int mile;
			cin >> mile;
			cin.ignore();
			mycar.run(mile);
			break;
		}
		case '2':
		{
			float f;
			cin >> f;
			cin.ignore();
			mycar.fillfuel(f);
			break;
		}
		}
	}
}


