#include<iostream>
using namespace std;
class vectors
{
public:
int v[3];

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
friend vectors operator+(vectors,vectors);
friend vectors operator-(vectors,vectors);
friend vectors operator*(int,vectors);
friend vectors operator*(vectors,int);
friend istream & operator>>(istream &,vectors &);
friend ostream & operator>>(ostream &,vectors &);
}; 
vectors operator+(vectors a,vectors b)
{
vectors c;
for(int i=0;i<3;i++)
c.v[i]=a.v[i]+b.v[i];
return c;
}
vectors operator-(vectors a,vectors b)
{
vectors c;
for(int i=0;i<3;i++)
c.v[i]=a.v[i]-b.v[i];
return c;
}
istream & operator>>(istream &din,vectors &a)
{
for(int i=0;i<3;i++)
din>>a.v[i];
return (din);
}
ostream & operator<<(ostream &dout,vectors &a)
{
for(int i=0;i<3;i++)
{
dout<<a.v[i];
}
return(dout);
}
int x[3]={2,4,6};
int main()
{
vectors v1,v2,v3;
vectors v=x;
cout<<"enter the vector";
cin>>v1;
cin>>v2;
cout<<v1;
cout<<v2;
v3=v1+v2;
cout<<v3;
return 0;
}


