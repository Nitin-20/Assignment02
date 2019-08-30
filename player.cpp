#include"player.h"
	Player::Player()=default;
	Player::Player(string n,int a,string c):name(n),age(a),country(c)
		{}

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
//	    cin.ignore(cin,name);
		}

		void Player::Display()
		{
		    cout<<"Name of player:""\t"<<name<<endl;
	            cout<<"Age of player:""\t"<<age<<endl;
        	    cout<<"Country:""\t"<<country<<endl;
		}

		int Player::Agedata()
		{
		    return age;
		}


