#include<iostream>
#include<string.h>
using namespace std;
class strmanip
{
char *p;
int len;
public:
strmanip()
{
len=0;
p=0;
}
strmanip(const char *s)
{
len=strlen(s);
p=new char[len+1];
strcpy(p,s);
}
strmanip(const string &s)
{
len=s.len;
p=new char[len+1];
strcpy(p,s.p);
}
friend strmanip operator + (const string &s,const string &t);
friend strmanip operator == (const string &s,const string &t);
friend strmanip operator * (const string &s,const string &t);
friend istream & operator >> (istream &,strmanip &);
friend ostream & operator << (ostream &,strmanip &);
void show(const string s)
{
cout<<s.p;
}
};
strmanip operator + (const string &s,const string &t)
{
string temp;
temp.len=s.len+t.len;
temp.p=new char[(temp.len)+1];
strcpy(temp.p,s.p);
strcat(temp.p,t.p);
return temp;
}
int main()
{
strmanip s1="Hello";
strmanip s2="world";
strmanip t1,t2,t3;
t1=s1;
t2=s2;
t3=s1+s2;
strmanip s4;
s4=show(s3);
return 0;
}
