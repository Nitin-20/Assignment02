#include<iostream>
#include <iostream>
#include <string>
using namespace std;

class Address

{
    private:
	string houseno;
	string colony;
	string  area;
	string  city;
	string pincode;


	public:
		Address();
		Address(string,string,string,string,string);
		void Accept();
		void Display();
		int comp(Address& ,Address&);
};
