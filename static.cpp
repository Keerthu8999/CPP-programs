#include<iostream>
using namespace std;
class stat
{
static int count;
int number;
public:
void getdata();
static void counter()
{
cout<<count<<"is count"<<endl;
}
void putdata();
};
int stat::count;
void stat::getdata()
{
number=++count;
}

void stat::putdata()
{
cout<<number<<endl;
}
int main()
{
stat s;
s.getdata();
stat::counter();
s.getdata();
stat::counter();
s.getdata();
stat::counter();
s.putdata(); 
return 0;
}
