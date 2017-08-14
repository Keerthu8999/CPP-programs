#include<iostream>
#include<string.h>
using namespace std;
class strmanip
{
char *p,stri[100];
public:
void getstr()
{
cout<<"Enter the string";
cin>>stri;
stri=p;
}
strmanip operator + (strmanip str);
void putstr()
{
while(*p!='\0')
{
cout<<"The string is"<<*p++;
}
}
strmanip strmanip:: operator + (strmanip str)
{
//strmanip res;
strcat(p,str.p);
return p;
}
int main()
{
strmanip str1,str2,str3;
str1.getstr();
str2.getstr();
str3=str1+str2;
str3.putstr();
return 0;
}
