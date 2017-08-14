#include<iostream>
using namespace std;
#include<string.h>
class strmanip
{
char *p;
int len;
public:
strmanip(char *str)
{
len=strlen(str);
p=new char[len+1];
strcpy(p,str);
}
strmanip operator + (strmanip);
};
strmanip strmanip :: operator +(strmanip s)
{
strmanip r;
r.p=strcat(p,s.p);
return r.p;
}
int main()
{
strmanip st1("Hello");
strmanip st2("World");
strmanip st3;
st3=st1+st2;
cout<<st3;
return 0;
}
