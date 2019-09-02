#include"address.h"
int main()
{
  Address a3,a4;
  a3.Accept();
  a3.Display();
  a4.Accept();
  a4.Display();
  int x=(a3==a4);
  if (x==1)
                cout<<endl<<"Address you have entered are same";
        else
                cout<<endl<<"Address are not same";

//  a3.comp(a3,a4);
  return 0;
}
