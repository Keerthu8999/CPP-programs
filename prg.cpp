#include<iostream>
using namespace std;
class addition
{
int a;
public:
void getdata()
{
cout<<"Enter the value of two integers"<<endl;
cin>>a;
}
friend addition operator + (addition,addition);
void print()
{
cout<<a;
}
};
addition operator + (addition num1,addition num2)
{
addition c;
c.a=num1.a+num2.a;
return c;
}
int main()
{
addition add1,add2,add3;
cout<<"The first no is"<<endl;
add1.getdata();
cout<<"The second no is"<<endl;
add2.getdata();
add3=add1+add2;
cout<<"The sum is"<<endl;
add3.print();
return 0;
}

