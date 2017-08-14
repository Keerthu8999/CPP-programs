#include<iostream>
#include<string.h>
using namespace std;
class strmanip
{
public:
char *p,stri[100];
int len;
strmanip()
{
len=0;
p=new char[len+1];
}
strmanip operator + (strmanip);
void putstr()
{
while(*p!='\0')
{
cout<<"The string is"<<*p++;
}
}
};
strmanip strmanip:: operator + (strmanip str)
{
//strmanip res;
strcat(p,str.p);
while(*p!='\0')
{
cout<<"The string is"<<*p++;
}
}
int main()
{
strmanip str1("hello");
strmanip str2("heee");
strmanip str3;
str3=str1+str2;
str3.putstr();
return 0;
}
