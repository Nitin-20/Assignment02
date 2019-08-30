#include"address.h"
int main()
{
  Address a3,a4;
  a3.Accept();
  a3.Display();
  a4.Accept();
  a4.Display();
  a3.comp(a3,a4);
  return 0;
}
