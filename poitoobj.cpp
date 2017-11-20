#include<iostream>
using namespace std;
class shop
{
int code;
int qty;
float rate;
public:
void getdata()
{
cin>>code>>qty>>rate;
}
void putdata()
{
cout<<code<<" "<<qty<<" "<<rate;
}
};
int main()
{
shop *ptr=new shop[3];
shop *ptr2=ptr;
for(int i=0;i<3;i++)
{
ptr->getdata();
ptr++;
}
for(int i=0;i<3;i++)
{
ptr2->putdata();
ptr2++;
}
return 0;
}
