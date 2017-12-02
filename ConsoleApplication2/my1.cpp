#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  const int ARRAY_SIZE = 10;
  int number[ARRAY_SIZE];
  int count = 0;
  ifstream inputFile;

  //Open the file
  inputFile.open("my.txt");
  while (count < ARRAY_SIZE
         && inputFile >> number[count])
    count++;

  inputFile.close();

    cout << "The number read";
  for (count = 0; count < ARRAY_SIZE; count++)
    cout << number[count] << " ";
  cout << endl;
  char b;
  cin >> b;
  return 0;
}
