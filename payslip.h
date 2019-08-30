#include <iostream>
#include<string>
using namespace std;
class Payslip{
	private:
		int empid;
       		 string name;
		float da;
		float hra;
		float sal;
	public:
                Payslip();
		Payslip(int ,string ,float ,float ,float );
		void Accept();
		void Display();
		int cal();
};
