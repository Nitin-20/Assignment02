#include"player.h"
Player::Player()=default;
/*{ 	
	name='\0';
	age=0;
	country='\0';
}*/
	Player::Player(string n,int a,string c):name(n),age(a),country(c)
{
}
	void Player::Accept()
{
	cout<<"Enter the name of player:"<<endl;
	cin.get();
        getline(cin,name);
	cout<<"Enter the age of player:"<<endl;
	cin>>age;
	cout<<"Enter the country of player:"<<endl;
	cin.get();
        getline(cin,country);
	cout<<endl;
}
	void Player::Display()
{
	cout<<"Name of player:""\t"<<name<<endl;
	cout<<"Age of player:""\t"<<age<<endl;
	cout<<"Country:""\t"<<country<<endl;
	cout<<endl;
}
	
	int Player::Agedata()
		{
		    return age;
		}
	void Sort(Player *parr,int n)
	{
		for(int i=0;i<n;i++)
       	    {
            	for(int j=n-1;j>i;j--)
		{           
       			 if(parr[j].Agedata()<parr[j-1].Agedata())
       				 {
					//int temp;
        				 Player temp = parr[j];
       					 parr[j] = parr[j-1];
        				 parr[j-1] =  temp;
				}
   		}
		}
	}
