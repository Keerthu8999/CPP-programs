#include<iostream>
using namespace std;
class B
{
int pri;
public:int pub;
protected:int pro;
public: 
void getdata()
{
cout<<"Enter the values of the variables";
cin>>pri>>pub>>pro;
}
int accept_pri()
{
return pri;
}
void sum()
{
cout<<pri+pub+pro<<" is the sum";
}
};
class DPub:public B
{
public:
void display_pub()
{
cout<<pub<<":Public"<<endl;
}
};
class DPro:protected B
{
public:
void display_pro()
{
cout<<pro<<":Protected"<<endl;
}
};
class DPri:private B
{
public:
void display_pri()
{
cout<<"Private:"<<accept_pri();
}
};
int main()
{
B base;
base.getdata();

DPub publi;
publi.display_pub();
DPro protec;
protec.display_pro();
DPri priv;
priv.display_pri();
base.sum();
return 0;
}


