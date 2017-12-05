#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream f;
  f.open("my.txt", ios::binary | ios::out);
  int x = 10;
  char * ptr = nullptr;
  ptr = reinterpret_cast<char *>(&x);
  f.write(ptr, sizeof(ptr));
  f.close();
}
