#include<iostream>
#include<cstring>
using namespace std;
class Player
{
	private:
		string name;
		int age;
		string country;
	public:
		Player();
		Player(string,int,string);
		void Accept();
		void Display();
		int Agedata();

};


