#include<iostream>
#include<cstring>
using namespace std;
class Mystring
{
	int size;
	char *p;
	public:
	Mystring();
	Mystring(char*);
	Mystring(const Mystring &x);
	void accept();
	void display();
	~Mystring();
};
