#include"Mystring.h"
Mystring::Mystring():size(0),p(new char){*p='\0';}
Mystring::Mystring(char *s)
{
size=strlen(s);
p=new char[size+1];
strcpy(p,s);
}
Mystring::Mystring( const Mystring &x)
{
	size=x.size;
	p=new char[size+1];
	for(int i=0;i<size;i++)
	{
		p[i]=x.p[i];
	}
}
void Mystring::accept()
{
	cout<<"enter size of string:"<<endl;
	cin>>size;
	p=new char[size+1];
	cout<<"enter string:"<<endl;
	cin>>p;
}
void Mystring::display()
{
	cout<<"size is:"<<size<<endl;
	cout<<"string is:"<<p<<endl;
}
 Mystring::~Mystring()
{
	delete []p;
}

