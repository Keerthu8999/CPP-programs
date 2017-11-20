#include<iostream>
using namespace std;
class binaryop
{
int real,imag;
public:
binaryop(){}
binaryop(int r,int i)
{
real=r;
imag=i;
}
void getdata()
{
cout<<"Enter the real and imaginary parts"<<endl;
cin>>real>>imag;
}
friend binaryop operator + (binaryop b1,binaryop b2)
{
binaryop temp;
temp.real=b1.real+b2.real;
temp.imag=b1.imag+b2.imag;
return temp;
}
void display()
{
cout<<real<<"+"<<"i"<<"("<<imag<<")"<<endl;
}
};
int main()
{
binaryop b1,b2,b3;
b1.getdata();
b2.getdata();
b3=b1+b2;
b3.display();
return 0;
}


