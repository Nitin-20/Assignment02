#include"payslip.h"
                Payslip::Payslip()= default;
		//Constr using Intilialization List

		Payslip::Payslip(int eid,string n,float d,float h,float s):empid(eid),name(n),da(d),hra(h),sal(s)
		{
		//cout<<"Init";
		}


		void Payslip::Accept(){
		    cout<<"Employee id"<<"\t";
			cin>>empid;
			cout<<endl;
			cout<<"Name"<<"\t";
			cin.get();
			getline(cin,name);
			cout<<endl;
			cout<<"DA"<<"\t";
			cin>>da;
			cout<<endl;
			cout<<"HRA"<<"\t";
			cin>>hra;
			cout<<endl;
			cout<<"Basic Salary"<<"\t";
			cin>>sal;
			cout<<endl;
		}

 		void Payslip::Display(){


                        cout<<"Eid ""\t"<<empid<<endl;
                        cout<<"Name ""\t"<<name<<endl;
                        cout<<"DA ""\t"<<da<<endl;
                        cout<<"HRA ""\t"<<hra<<endl;
                        cout<<"Basic Salary ""\t"<<sal<<endl;
                }
        int Payslip::cal()
        {

            float total=da+hra+sal;
            cout<<"Total Salary of Employee:=""\t";
            cout<<total<<"  rupees"<<endl;
            return 0 ;
        }
