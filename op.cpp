#include<iostream>
using namespace std;
class vectors2;
class vectors
{
int *v;
public:
vectors()
{
for(int i=0;i<3;i++)
{
v[i]=0;
}
}
vectors(int *x)
{
for(int i=0;i<3;i++)
{
v[i]=x[i];
}
}
friend vectors operator + (vectors v1,vectors v2)
{
vectors temp;
for(int i=0;i<3;i++)
{
temp.v[i]=v1.v[i]+v2.v[i];
}
}

friend istream& operator >> (istream &din,vectors &a)
{
for(int i=0;i<3;i++)
{
din>>a.v[i];
}
return (din);
}

friend ostream& operator << (ostream &dout,vectors &a)
{
for(int i=0;i<3;i++)
{
dout<<a.v[i];
}
return (dout);
}
};

int main()
{
vectors a,b,c;
cin>>a;
cin>>b;
c=a+b;
cout<<c;
return 0;
}






