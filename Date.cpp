#include"Date.h"
Date::Date()
	{
		d=0;
		m=0;
		y=0;
	}
		Date::Date(int dd,int mm,int yy):d(dd),m(mm),y(yy)
	{
	}



  
	int Date::countLeapYears(Date d) 
	{ 
   	 int years = d.y; 
  
 	   if (d.m <= 2) 
        	years--; 
  
  	  return years / 4 - years / 100 + years / 400; 
	} 
  
 	int Date::Difference(Date dt1, Date dt2) 
	{ 
	    long int n1 = dt1.y*365 + dt1.d; 
  
    		for (int i=0; i<dt1.m - 1; i++) 
        	n1 += monthDays[i]; 
  
    		n1 += countLeapYears(dt1); 
  
  
 	   long int n2 = dt2.y*365 + dt2.d; 
    		for (int i=0; i<dt2.m - 1; i++) 
        	n2 += monthDays[i]; 
    		n2 += countLeapYears(dt2); 
  
 	   return (n2 - n1); 
	}    
    void Date::accept()
    {
	    cout<<"enter the date:";
	    cin>>d>>m>>y;
	   
}
//overloading operators//
void Date::operator+(int dx)
		{
			int diff=30-d;
			if(d+dx>30)
			{
				d=dx-diff;
				m=m+1;
			}
			else 
			{
				d=d+dx;
			}
			cout<<d<<"/"<<m<<"/"<<y;
		}
		
		void Date::operator-(int dx)
		{
			int diff=dx-d;
			if(d-dx<0)
			{
				d=30-diff;
				m=m-1;
			}
			else 
			{
				d=d-dx;
			}
			cout<<d<<"/"<<m<<"/"<<y;
		}



		bool Date::operator==(const Date &b)const
		{
			return(d==b.d && m==b.m && y==b.y);
		}
		bool Date::operator !=(const Date &b)const
		{
			return (d!=b.d && m!=b.m && y!=b.y);
		}


