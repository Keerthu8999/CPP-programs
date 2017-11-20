#include<iostream>
#include<string.h>
using namespace std;
class student
{
int rollno;
//char *name;
int len;
public:
student()
{

}
student(int r)
{
rollno=r;
}
};
class test:virtual public student
{
int m1,m2,m3;
public:
test(int r,int ma1,int ma2,int ma3):student(r)
{
m1=ma1;
m2=ma2;
m3=ma3;
}
void sum()
{
int total;
total=m1+m2+m3;
cout<<total;
}
};
class sports: public virtual student
{
int g1,g2,g3;
public:
sports(int r,int ga1,int ga2,int ga3):student(r)
{
g1=ga1;
g2=ga2;
g3=ga3;
}
void sum()
{
int sumo;
sumo=g1+g2+g3;
cout<<sumo<<endl;
}
};
class result:public test,public sports
{
int r;
public:
result(int r,int ma1,int ma2,int ma3,int ga1,int ga2,int ga3,int r1):test(r,ma1,ma2,ma3),sports(r,ga1,ga2,ga3)
{
r=r1;
}
void putdata()
{
cout<<r;
}
};
int main()
{
test t(10,40,49,41);
sports s(10,40,49,41);
result re(10,40,49,41,33,34,35,67);
re.putdata();cout<<endl;
t.sum();cout<<endl;
s.sum();cout<<endl;
return 0;
}


