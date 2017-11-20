#include<iostream>
#include<string.h>
using namespace std;
class city
{
protected:
char *name;
int len;
public:
city()
{
len=0;
name=new char[len+1];
}
void getname()
{
char *s;
s=new char[30];
cout<<"Enter city:";
cin>>s;
len=strlen(s);
name=new char[len+1];
strcpy(name,s);
}
void printname()
{
cout<<name;
}
};
int main()
{
city *ptr[10];
int n=1,option;
for(int i=1;i<=4;i++)
{
ptr[n]=new city;
ptr[n]->getname();
n++;
}
for(int i=1;i<=n;i++)
{
ptr[i]->printname();
}
return 0;
}
