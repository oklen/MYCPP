// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
#include<iomanip>
using namespace std;

void showMenu();
void showFees(double, int);

int main()
{
	int choice;
	int months;

	const int ADULT_CHOICE = 1,
		CHILD_CHOICE = 2,
		SENIOR_CHOICE = 3,
		QUIT_CHOICE = 4;

        const double ADULT = 40.0,
          CHILD =20.0,
          SENIOR = 30.0;

	cout << fixed << showpoint << setprecision(2);

	do
	{
		showMenu();
		cin >> choice;

		//Vaildate the menu selectoin.
		while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
		{
			cout << "Please enter a vaild menu choice: ";
			cin >> choice;
		}

		//If the user does not want to quit, proceed.
		if (choice != QUIT_CHOICE) {
			cout << "For how many month?";
			cin >> months;

			switch (choice)
			{
			case ADULT_CHOICE:
				showFees(ADULT, months);
				break;
			case CHILD_CHOICE:
				showFees(CHILD, months);
				break;
			case SENIOR_CHOICE:
				showFees(SENIOR, months);
			}
		}
	}while (choice != QUIT_CHOICE);
        return 0;
}
void showMenu()
{
  cout << "\n\t\tHealth Club Membership Menu\n\n"
       << "1. Standrad Adult Membership\n"
       << "2. Child Membership'n"
       << "3.Senior Citizen Membershuo\n"
       << "4.Quit the Program\n\n"
       << "Enter your choice: \n";
}

void showFees(double memberRate, int months)
{
  cout << "The total charges are $"
       << (memberRate * months) << endl;
}
