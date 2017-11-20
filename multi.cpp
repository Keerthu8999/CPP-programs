#include<iostream>
using namespace std;
class base1
{
int a,b;
public:
base1(int x,int y)
{
a=x;
b=y;
}
void sum()
{
int total;
total=a+b;
cout<<total;
}
};
class base2
{
int a1,b1;
public:
base2(int x1,int y1)
{
a1=x1;
b1=y1;
}
void sum()
{
int total;
total=a1+b1;
cout<<total;
}
};
class derived:public base1,public base2
{
public:
//derived(){};
void display()
{
base2::sum();
base1::sum();
}};
int main()
{
base1 b1(10,20);
b1.sum();
base2 b2(20,30);
b2.sum();
derived d;
d.display();
return 0;
}
