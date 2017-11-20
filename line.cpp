#include<iostream>
#include<list>
#include<vector>
using namespace std;
class Hashing
{
int size,index;
int *has;
public:
Hashing(){}
Hashing(int s)
{
size=s;
has=new int[size];
for(int i=0;i<size;i++)
{
has[i]=-1;
}
}
int hashfn(int x)
{
return 7-(x%7);
}
int hashfn1(int x,int c)
{
return c*hashfn(x);
}
void insert(int x)
{
index=hashfn(x);
int k=0;
while(has[index]!=-1)
{
index=hashfn1(x,k);
k++;
}
has[index]=x;
}
void display()
{
for(int i=0;i<size;i++)
{
if(has[index]!=NULL)
cout<<"Element at"<<i<<"is "<<has[i]<<endl;
else
cout<<"Element at"<<i<<"is "<<"NULL"<<endl;
}
}
};
int main()
{
Hashing h(10);
h.insert(89);
h.insert(18);
h.insert(49);
h.insert(58);
h.insert(69);
//h.insert(98);
h.display();
return 0;
}
