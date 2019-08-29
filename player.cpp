#include"player.h"
Player::Player()
{ 	
	name='\0';
	age=0;
	country='\0';
}
	Player::Player(int a):age(a)
{
}
	void Player::Accept()
{
	cout<<"Enter the name of player:"<<endl;
	cin>>name;
	cout<<"Enter the age of player:"<<endl;
	cin>>age;
	cout<<"Enter the country of player:"<<endl;
	cin>>country;
}
	void Player::Display()
{
	cout<<"Name of player:""\t"<<name<<endl;
	cout<<"Age of player:""\t"<<age<<endl;
	cout<<"Country:""\t"<<country<<endl;
}

