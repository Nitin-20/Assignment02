#include "mobile.h"

int main()
{
	int k,count=0,x;
	Mobile arr[20];
	while(1)
	{
		cout<<"\n----MENU----\n";
		cout<<"1. Add Mobile: \n";
		cout<<"2. Display List of available mobiles: \n";
		cout<<"3. Find out quantity of particular mobile type: \n";
		cout<<"4. Find out availability of Particular model: \n";
		cout<<"5. To exit \n";
		cin>>k;
		switch(k)
		{
			case 1:	arr[count].Accept();
			        count++;
			   	break; 
				
			case 2: for(int i=0;i<count;i++)
                               		arr[i].Display();
                                break;

			case 3:	cout<<"Enter the mobile model: ";
				cin>>x;
				cout<<endl;
				for(int i=0;i<count;i++)
                                        arr[i].Search(x);
                               	break;

			case 4:	cout<<"Enter the mobile model: ";
                                cin>>x;
                                for(int i=0;i<count;i++)
                                        arr[i].Avl(x);
				break;

			case 5:cout<<"exited\n";
			       exit(5);

			default: cout<<"Try again";
				 break;
		
		}
	}
	cout<<endl;
	return 0;
}
