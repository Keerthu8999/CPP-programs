#include<iostream>
#include<string.h>
using namespace std;
class strmanip
{
char *p;
int length;
public:
strmanip()
{
length=0;
p=new char[length+1];
}
strmanip(char *s)
{
length=strlen(s);
p=new char[length+1];
strcpy(p,s);
}
strmanip(strmanip &a)
{
p=a.p;
}

void concat(strmanip &,strmanip &);
void display()
{
cout<<p;
}
};
void strmanip::concat(strmanip &a,strmanip &b)
{
length=a.length+b.length;
delete p;
p=new char[length+1];
strcpy(p,a.p);
strcat(p,b.p);
}
int main()
{
strmanip s1("Keeru"),s2("Don"),s3;

s1.display();
cout<<endl;
s2.display();
cout<<endl;
s3.concat(s1,s2);
cout<<endl;
s3.display();
cout<<"HI";
strmanip s4=s1;
s4.display();
cout<<"HELLO";
strmanip s5(s2);
s5.display();
cout<<"FREE";
return 0;
}

