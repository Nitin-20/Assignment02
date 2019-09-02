#include<iostream> 
#include<string>
using namespace std; 
  
class Date
{
	private:
	int d,m,y;
	public:
	Date();
	Date(int ,int ,int );

	const int monthDays[12] = {31, 28, 31, 30, 31, 30, 
                           31, 31, 30, 31, 30, 31}; 
  
	int countLeapYears(Date);
       int Difference(Date, Date);
void accept();
void operator+(int);
void operator-(int );
bool operator==(const Date &)const;
bool operator !=(const Date &)const;
};
