// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include <iomanip>
#include<iostream>
using namespace std;

int square(int number);
double square(double number);

int main()
{
  int userInt;
  double userFloat;

  cout << fixed << showpoint << setprecision(2);
  cout << "Enter an integer and a floating-point value: ";
  cin >> userInt >> userFloat;

  //Display their squares.
  cout << "Here are their squares:";
  cout << square(userInt) << " and " << square(userFloat);
  char b;
  cin >> b;
  return 0;
}

int square(int number)
{
  return number * number;
}

double square(double number)
{
  return number * number;
}
