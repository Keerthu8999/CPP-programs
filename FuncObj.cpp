#include<iostream>
using namespace std;
class Functors
{
public:
Functors(){};
virtual int operator()(int a,int b)=0;
};
class add:public Functors
{
public:
add(){};
virtual int operator()(int a,int b)
{
return a+b;
}
};

class subtract:public Functors
{
public:
subtract(){};
virtual int operator()(int a,int b)
{
return a-b;
}
};

class multiply:public Functors
{
public:
multiply(){};
virtual int operator()(int a,int b)
{
return a*b;
}
};

class divide:public Functors
{
public:
divide(){};
virtual int operator()(int a,int b)
{
return a/b;
}
};

int calcu(int a,int b,Functors* func)
{
return (*func)(a,b);
}

int main()
{
int a,b;
cin>>a>>b;
Functors* f1=new add();
Functors* f2=new subtract();
Functors* f3=new multiply();
Functors* f4=new divide();
cout<<"Add:"<<calcu(a,b,f1);
cout<<"Subtract:"<<calcu(a,b,f2);
cout<<"Multiply:"<<calcu(a,b,f3);
cout<<"Divide:"<<calcu(a,b,f4);
delete f1;
delete f2;
delete f3;
delete f4;
return 0;
}

