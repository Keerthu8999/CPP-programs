#include<iostream>
using namespace std;
class class2;
class class1
{
int a,b,c;
public:
void getdata()
{
cin>>a>>b>>c;
}
int show_a()
{
return a;
}
int show_b()
{
return b;
}
int show_c()
{
return c;
}
void putdata()
{
cout<<a<<b<<c;
}
};
class class2
{
int a,a1;
public:
class2()
{
a=0;
a1=0;
}
class2(int x,int y)
{
a=x;
a1=y;
}
class2(class1 p)
{
a=p.show_a();
a1=p.show_b()*p.show_c();
}
void putdata()
{
cout<<a<<a1;
}
};
int main()
{
class1 c1;
class2 c2;
c1.getdata();
c1.putdata();
c2=c1;
c2.putdata();
return 0;
}

