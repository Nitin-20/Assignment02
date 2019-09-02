#include"Date.h"
int main() 
{   int days;
    Date dt1,dt2,dt3;
    dt1.accept();
    dt2.accept();
    int x=dt3.Difference(dt1,dt2);  
    cout << "Difference between two dates is " <<x;
   int d=(dt1==dt2);
    if (d==1)
                cout<<endl<<"Dates you have entered are same";
        else
                cout<<endl<<"Dates are not equal";
 
  cout<<endl<<"Enter the days you want to move forward from initial date:::";
	cin>>days;
	dt1.operator+(days);
  cout<<endl<<"Enter the days you want to move backward from initial date:::";
	cin>>days;
	dt1.operator-(days);
	//int d=(dt1==dt2);
/*	if (d==1)
		cout<<endl<<"Dates you have entered are same";
	else
		cout<<endl<<"Dates are not equal";*/
	return 0;
}  

