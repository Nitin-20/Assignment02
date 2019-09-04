#include "mobile.h"

Mobile::Mobile():modelno(0),price(0),manufacturer(" "),quantity(0)
{
	
}

Mobile::Mobile(int model,int p,string m, int q):modelno(model),price(p),manufacturer(m),quantity(q)
{
	
}

void Mobile::Accept()
{	
	 cout<<"\n Enter Model No: "<<endl;
      // cin.get();
       cin>>modelno;
        cout<<"\n Enter Price:"<<endl;
       // cin.get();
        cin>>price;
        cin.get();
        cout<<"\n Enter Manufacturer"<<endl;
        getline(cin,manufacturer);
        cout<<"\n Enter Quantity"<<endl;
        cin>>quantity;
}

void Mobile::Display()
{
	cout<<"\n Model No.="<<modelno<<endl;
        cout<<"\n Price="<<price<<endl;
        cout<<"\n Manufaturer="<<manufacturer<<endl;
        cout<<"\n Quantity="<<quantity<<endl;
}
void Mobile::Search(int model)
{
	if(model == modelno)
		cout<<"Quantity of "<<model<<" is: "<<quantity<<endl; 	
}

void Mobile::Avl(int model)
{
        if(model == modelno)
	{
	   	cout<<"Available"<<endl; 
	}
	else
	{
		cout<<"Not available"<<endl;
	}
}
