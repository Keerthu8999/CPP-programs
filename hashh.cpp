#include<iostream>
#include<list>
using namespace std;
class Hashing
{
int index,size;
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
return x%size;
}
int hashfn1(int x,int c)
{
return ((hashfn(x)+c)%size);
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
cout<<has[i]<<" ";
/*if(has[index]!=NULL)
cout<<"Element at"<<i<<"is "<<has[i]<<endl;
else
cout<<"Element at"<<i<<"is "<<"NULL"<<endl;*/
}
}
};
int main()
{
Hashing h(10);
h.insert(12);
h.insert(31);
h.insert(22);
h.insert(45);
h.insert(68);
h.insert(98);
h.display();
return 0;
}
