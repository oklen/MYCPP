#include <iostream>
using namespace std;

void display(auto seats);
void fill(auto seats);

int  main()
{
  int row, colomn;
  char answer;
  char seats[10][10];
  fill(seats);
  while(1) {
  cout << "Please input your want ROW" << endl;
  cin >> row;
  cout << "Please input your want COLOMNS" << endl;
  cin >> colomn;
  seats[row][colomn] = '#';
  display(seats);
  cout << "Continue?" << endl;
  cin >> answer;
  if (answer == 'n'){
    return 0;
  }
}
}

void display(auto seats)
{
  for (auto i=0;i<10;i++)
    {
      for (auto j=0;j<10;j++)
        {
          cout << seats[i][j];
        }
      cout << endl;
    }
}

void fill(auto seats)
{
  for (auto i=0;i<10;i++)
    {
      for (auto j=0;j<10;j++)
        {
          seats[i][j] = '+';
        }
      cout << endl;
    }
}
