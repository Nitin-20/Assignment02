#include"address.h"
	Address::Address():houseno("") ,colony(""),area(""), city(""),pincode(""){
		cout<<"\n Address::CTOR"<<endl;
	}
	Address::Address(string hno,string col,string a,string c,string p):houseno(hno), colony(col),area(a), city(c),pincode(p){
		cout<<"\n Address::PCTOR"<<endl;
	}

	void Address::Accept(){
	cout<<"\n Enter House no:"<<endl;
	//cin.get();
	getline(cin,houseno);
	cout<<"\n Enter Colony name:"<<endl;
	//cin.get();
	getline(cin,colony);
	cout<<"\n Enter Area"<<endl;
	//cin.get();
	getline(cin,area);
	cout<<"\n Enter City"<<endl;
	//cin.get();
	getline(cin,city);
	cout<<"\n Enter Pincode:"<<endl;
	//cin.get();
	getline(cin,pincode);

	}

	void Address::Display(){
	cout<<"\n House no.="<<houseno<<endl;
	cout<<"\n Colony Name="<<colony<<endl;
	cout<<"\n Area="<<area<<endl;
	cout<<"\n City="<<city<<endl;
	cout<<"\n Pincode="<<pincode<<endl;
	}
bool Address::operator==(const Address &a)const
{	
	return(houseno==a.houseno && colony==a.colony && area==a.area && city==a.city && pincode==a.pincode);
}
	
	/*int Address::comp(Address& a1,Address& a2)
	{
	    if(a1.houseno==a2.houseno && a1.colony==a2.colony && a1.area==a2.area && a1.city==a2.city && a1.pincode==a2.pincode)
        {
            cout<<"\nAddress is same"<<endl;
        }
        else{
            cout<<"\n Address is not same"<<endl;
        }
        return 0;
	}*/
