#include<iostream>
#include<string>
using namespace std;

class Mobile
{
	int modelno;
	int price;
	string manufacturer;
	int quantity;
	
	public:
	Mobile();
	Mobile(int,int,string, int);
	void Accept();
	void Display();
	void Search(int);

	void Avl(int);

};
