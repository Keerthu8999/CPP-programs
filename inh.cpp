#include<iostream>
using namespace std;
class B
{
int pri;
public:int pub;
protected:int pro;
}
class B:public DPub
{
public:
void getdata()
{
cin>>pub;
}
void display()
{
cout<<pub<<":Public";
}
}
class B:public DPub
{
public:
void getdata()
{
cin>>pub;
}
void display()
{
cout<<pub<<":Public";
}
}
