/*1. Create Time class with data members
hours
minutes
seconds
and implement following
 Default constructor
 Parameterized constructor
 Destructor
 Function for display data
 Function to compare two time objects
 Function to find out difference between
two time objects*/
#include<iostream>
using namespace std;
class Time
{
	int hr,min,sec;
	public:
		Time():hr(00),min(00),sec(00){}
	Time(int h,int m,int s):hr(h),min(m),sec(s){}
	void gettime()
	{
		cout<<"enter hour:"<<endl;
		cin>>hr;
		cout<<"enter minutes:"<<endl;
		cin>>min;
		cout<<"enter seconds:"<<endl;
		cin>>sec;
	}
	void puttime()
	{
		cout<<hr<<" hr"<<min<<" min"<<sec<<" sec"<<endl;
	}
	int comp(Time &t1,Time &t2)
	{
		if(t1.hr==t2.hr && t1.min==t2.min && t1.sec==t2.sec)
		{
			cout<<"same time"<<endl;
		}
		else
		{
			cout<<"time is not same"<<endl;
		}
		return 0;
	}
	int diff(Time &t1,Time &t2)
	
	{
//		cout<<"t1 address:"<<&t1<<endl;
		int min1,min2,sec1,sec2,hr1,hr2;
		if(t1.min>t2.min)
		{
			min1=t1.min;
			min2=t2.min;
		}
		else{
			min1=t2.min;
			min2=t1.min;
		}
		
		if(t1.hr>t2.hr)
		{
			hr1=t1.hr;
			hr2=t2.hr;
		}
		else
		{
			hr1=t2.hr;
			hr2=t1.hr;
		}
		if(t1.sec>t2.sec)
		{
			sec1=t1.sec;
			sec2=t2.sec;
		}
		else
		{
			sec1=t2.sec;
			sec2=t1.sec;
		}
		min1=min1-min2;
		hr1=hr1-hr2;
		sec1=sec1-sec2;
		cout<<"diff of time is:"<<hr1<<" hr"<<min1<<" min"<<sec1<<" sec"<<endl;
	}
~Time(){cout<<"dtor called:"<<endl;}
};
int main()
{
	Time t3,t4;
//	cout<<"t3 address is:"<<&t3<<endl;
	t3.gettime();
	t3.puttime();
	t4.gettime();
	t3.comp(t3,t4);
	t3.diff(t3,t4);
	return 0;
}
