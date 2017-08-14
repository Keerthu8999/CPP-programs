#include<iostream>
#include<string.h>
using namespace std;
class string
{
char *p;
public:
string()
{
int r=strlen(p);
p=new int[r];
}
void getstr()
{
cout<<"Enter the string"<<endl;
cin>>p;
}
string operator + (string str)
{
strcat(p,str.p);
return p;
}
string operator - (string str1)
{
for(i=r;i>0;i--)
{
return str1.p;
}
string operator * (string str1)
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
return(str1*i);
}
}
};
int main()
{
string st1,st2;
st1.getstr();
st2.getstr();
-st1;
*st1;
st1+st2;
return 0;
}

