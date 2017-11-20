#include<iostream>
using namespace std;
class shop
{
int code;
int quantity;
float price;
public:
void getdata()
{
cout<<"Enter the code,quantity and price";
cin>>code>>quantity>>price;
}
void putdata()
{
cout<<code<<endl<<quantity<<price<<endl;
}
};
int main()
{
shop *s=new shop[3];
shop *d;
d=s;
int i;
for(i=0;i<3;i++)
{
s->getdata();
s++;
}
for(i=0;i<3;i++)
{
d->putdata();
d++;
}
return 0;
}
