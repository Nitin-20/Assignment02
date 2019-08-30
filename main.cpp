/*3. Create Your own String class (Use class name as
MyString) with data members

char * p;
int size;

Allocate memory dynamically for pointer and get
size from user.
Implement followings
 Default constructor
 Parameterized constructor
 Copy Constructor
 Destructor for clean-up (use delete compulsory)
 Display function.
 Separate header and implementation files*/
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
