#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
#include<string> 
#include "math.h"
using namespace std;

struct google
{
  int a;
  float b;
  char c;
  vector <char>d;
};

struct firefox
{
  int a;
  float b;
  char c;
  vector <int>d;
};

int testbinaryfile()
{
	fstream f;
	f.open("my.txt", ios::binary | ios::out);
	int x[] = {10, 20, 30, 405, 234, 32, 3, 23, 45, 12, 125, 6, 7
};
	char * ptr = nullptr;
	ptr = reinterpret_cast<char *>(&x);
	f.write(ptr, sizeof(ptr));
	f.close();
        return 0;
}

void testoverloadstruct(){
  google* togoogle = nullptr;
  google g;
  firefox f;
  unique_ptr<int> g2(new int);
  int intarray = 1;
  *g2 = intarray;
  togoogle = new google;
  togoogle = &g;
  g.a = 10;
  f.a = 20;
  cout << "g.a:" << g.a << endl;
  cout << "f.a" << f.a << endl;
  cout << "togoogle->a: " << togoogle->a << endl;
  cout << "test unique_ptr:" << *g2  << endl;
  cin >> f.c;
}

void teststring()
{
  char cache;
  string mystring;
  mystring.assign("Google");
  mystring.assign(10, 'g');
  mystring.append(" FireFix");
  cout << "I can hold %d num" << mystring.capacity() << endl;
  mystring.replace(0,sizeof("Google"), "Uangoo");
  cout << "This is my String: ";
  for (int i = 0; i < mystring.size(); i++){
    cout << mystring[i] ;}
  cout << "\n";
  cout << "This is the back of mystring" << mystring.back() << endl;
  cin >> cache;
}

  void paychecker()
  {
    string Date;
    int day = 0;
    int month = 0;
    int year = 0;
	string name;
	float money;
    cout << "Please Input the data:" << endl;
                                        getline(cin, Date);
										cout << "Please Input Your name:";
										getline(cin, name);
										cout << "Money you gain";
										cin >> money;
    string  sday = Date.substr(0,Date.find('/'));
    for (unsigned int i=0; i<sday.size();i++)
      day += ((int)(sday[i] - '0')*pow(10,1-i));
    if (day > 0 && day < 32)
      cout << "Day Accpect!" << endl;
	int pos, pos2;
	pos = Date.find('/') + 1;
	pos2 = Date.find('/', pos);
    string smonth = Date.substr(pos, pos2-pos);
	for (unsigned int i = 0; i < smonth.size(); i++)
	{
		month += ((int)(smonth[i] - '0')*pow(10, 1 - i));
	}
    if (month > 1 && month < 13)
      cout << "Month Accpect" << endl;
    string syear = Date.substr(pos2 + 1);
	for (int i = 0; i < syear.size(); i++)
	{
		year += (int)(syear[i] - '0')*pow(10, syear.size() - i - 1);
	}
	cout << "\t\t\tDate:" << day << '/' << month << '/' << year << endl;
	cout << "Pay to Order of:" << name << endl;
	if (money < 0.0 && money > 10000)
		cout << "Error" << endl;
	string report;
	int points = (int)(money*100) % 100;
	int truemoney = static_cast<int>(money);
	int thousand = (int)(money / 1000);
	truemoney %= 1000;
	int hundred = truemoney / 100;
	truemoney %= 100;
	int ty = truemoney / 10;
	int single = truemoney % 10;
	cout << "$";
	if (thousand)
	{
		cout << thousand << " thousands ";
	}
	if (hundred)
		cout << hundred << " hundreds ";
	if (ty)
		cout << ty << "ty ";
	cout << single << " and " << points << " cents";
}

struct customer{
  string name;
  string address;
  string city;
  string phonenumber;
  string account;
  string payment;
};

void _find2(string &name, fstream &f2)
{
  customer* pos2;
  pos2 = new customer;
  f2.read(reinterpret_cast<char *>(pos2),sizeof(*pos2));
  cout << pos2->name << pos2->account << pos2->address;
  while (pos2->name != name )
    {
      f2.read(reinterpret_cast<char *>(pos2),sizeof(*pos2));
      if (f2.eof())
        {
          pos2->name.assign("Not Find");
        }
    }
  cout << pos2->account << endl;
}

int _delete(string name, fstream &f)
{
  customer* pos;
  fstream f2;
  f2.open("cache", ios::out | ios::binary);
  pos = new customer;
    do {f.read(reinterpret_cast<char *>(pos), sizeof(*pos));
	if (name != pos->name)
	{
		f2.write(reinterpret_cast<char *>(pos), sizeof(*pos));
		cout << "write:" << pos->name << endl;
	}
	else
		break;
	if (f.eof())
		return 0;
	} while (1);
  cout << "Find Deleted Information:" << pos->name << endl;
  while (1)
    {
	  if (f.eof()) {
		  f2.close();
		  break;
	  }
	  cout << "Doning" << endl;
      f.read(reinterpret_cast<char *>(pos), sizeof(*pos));
	  if (f.eof()) {
		  f2.close();
		  break;
	  }
	  if (name != pos->name)
	  f2.write(reinterpret_cast<char *>(pos), sizeof(*pos));
  }
  f.close();
  cout << "Removeing" << endl;
  remove("db2.obj");
  rename("cache", "db2.obj");
  return 1;
}

int _insert(fstream &f)
{
  customer now;
  cout << "Input Your name" <<endl;
  getline(cin,now.name);
  cout << "Input Your Address" << endl;
  getline(cin, now.address);
  cout << "Input Your city" << endl;
  getline(cin, now.city);
  cout << "Input Your telephone number" << endl;
  getline(cin, now.phonenumber);
  cout << "Input Your account";
  getline(cin, now.account);
  if (now.account[0] == '-')
    {
      cout << "Invaild Account";
      return 1;
    }
  cout << "Input Your payment" << endl;
  getline(cin, now.payment);
  f.seekp(0,ios::end);
  f.write(reinterpret_cast<char *>(&now), sizeof(now));
  cout << "Write Done" << endl;
  return 0;
}

void show_all(fstream &f)
{
	customer *now;
	now = new customer;
	while (!f.eof())
	{
		f.read(reinterpret_cast<char *>(now), sizeof(*now));
		if (f.eof())
			break;
		cout << "Name:"<< now->name << endl;
		cout << "Address:" << now->address << endl;
		cout << "account:" << now->account << endl;
		cout << "payment:" << now->payment << endl;
	}
}
int main()
{
  customer now;
  fstream f;
  f.open("db2.obj",ios::in|ios::out|ios::binary);
  if (!f.is_open())
    {f.open("db2.obj", ios::out | ios::binary);
      f.close();
        exit(0);}
  cout << "Please Select You Want Server:" << endl;
  cout << "1.Serach information by name" << endl;
  cout << "2.Delete information by name" << endl;
  cout << "3.Insert New information" << endl;
  cout << "4.Show All" << endl;
  char choice;
  cin >> choice;
  cin.ignore();
  switch (choice)
    {
    case '1':{
      string name;
	  cout << "Input Who Your want to find" << endl;
      getline(cin, name);
      _find2(name, f);
      break;
    };
    case '2':
      {
        string name;
		cout << "Input who Your want to Delete" << endl;
		getline(cin, name);
        if(_delete(name, f))
          cout << "Delete Successful!" << endl;
        break;
      };
    case '3':{
      _insert(f);
      break;
        };
	case '4': {
		show_all(f);
	};
    };
  f.close();
  cout << "Continue" <<endl;
    main();
  return 0;
}
