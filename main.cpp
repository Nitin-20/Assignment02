#include"Mystring.h"
int main()
{
	Mystring m1("dac");
	m1.display();
	Mystring m2;
	m2.accept();
	m2.display();
	Mystring m3(m2);
	m3.display();
	return 0;
}
