#include"player.h"
void Sort(Player *parr,int n)
{


        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>i;j--)
{          // cout<<"j loop";
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
