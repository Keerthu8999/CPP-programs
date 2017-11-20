#include<iostream>
using namespace std;
class vectors
{
int a[3];
public:
friend istream& operator >> (istream &,vectors &);
friend ostream& operator << (ostream &,vectors &);
//void putdata();
int modify(int v,int n);
friend void add();
};
istream& operator >> (istream &din,vectors &v)
{
for(int i=0;i<3;i++)
{
din>>v.a[i];
return din;
}
}
ostream& operator << (ostream &dout,vectors &v)
{
for(int i=0;i<3;i++)
{
dout<<v.a[i];
return(dout);
}
}
/*void vectors::getdata()
{
for(int i=0;i<3;i++)
{
cin>>a[i];
}
}
void vectors::putdata()
{
for(int i=0;i<3;i++)
{
cout<<a[i];
}
}*/
int vectors::modify(int v,int n)
{
/*int v,n;
cout<<"Enter the coeff of the value to be modified";
cin>>n;
cout<<"Enter the value to be modified";
cin>>v;*/
if(n==1)
a[0]=v;
if(n==2)
a[1]=v;
if(n==3)
a[2]=v;
return v;
}
int main()
{
vectors v1;
cin>>v1;
v1.modify(4,2);
cout<<v1;
return 0;
}

