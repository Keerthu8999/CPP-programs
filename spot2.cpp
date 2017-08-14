#include<iostream>
using namespace std;
class duration;
class times
{
int hrs;
int minutes;
public:
times(int h,int m)
{
hrs=h;
minutes=m;
}
int gethrs(){return hrs;}
int getmins(){return minutes;}
//friend void operator ++ ();
//friend void operator -- ();
void putdata()
{
cout<<"Minutes in hrs class"<<(60*hrs)+minutes<<endl;
}
void increment()
{
int c=(60*hrs)+minutes;
cout<<c++<<":Postfix increment"<<endl;
cout<<++c<<":Prefix Increment"<<endl;
}
void decrement()
{
int c=(60*hrs)+minutes;
cout<<c--<<":Postfix decrement"<<endl;
cout<<--c<<":Prefix decrement"<<endl;
}
operator int(){return (60*hrs)+minutes;} 
/*operator duration()
{
duration temp;
temp mins=(2*hrs)+minutes;
return temp;
}*/
};
/*void operator ++ ()
{
cout<<"Postfix"<<hrs++<<minutes++;
cout<<"Prefix"<<++hrs<<++minutes;
}
void operator -- ()
{
cout<<"Postfix"<<hrs--<<minutes--;
cout<<"Prefix"<<--hrs<<--minutes;
return 0;
}*/
class duration
{
int mins;
public:
duration()
{
mins=0;
}
duration(int x)
{
mins=x;
}
void putdata()
{
cout<<"Minutes in duration class"<<mins<<endl;
}
duration(times t)
{
mins=(60*t.gethrs())+t.getmins();
}

};
int main()
{
times t1(2,13);

duration d1;
d1=t1;
int hey;
hey=t1;
cout<<"Claass to int conversion"<<hey<<endl;
t1.putdata();
d1.putdata();
t1.increment();
t1.decrement();
return 0;
}

