#include"player.h"
int main()
{
	int n;
	cout<<"Enter the no of players you want:"<<"\t";
	cin>>n;

	Player parr[n];

	for(int i=0;i<n;i++)
	{
	parr[i].Accept();
	}

    	Sort(parr,n);

	for(int i=0;i<n;i++)
	{
	parr[i].Display();
	}

	return 0;

}
