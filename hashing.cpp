#include<iostream>
#include<list>
using namespace std;
list<int>l;
int *array,ele;
class Hashi
{
int key,value;
public:
Hashi(){}
Hashi(int key,int value)
{
this->key=key;
this->value=value;
}
int HashFunc(int x)
{
return x%7;
}
void insert(int value)
{
for(int i=0;i<value;i++)
{
cout<<"Enter the element to be inserted";
cin>>ele;
int k=HashFunc(ele);
if(array[k]==NULL)
array[k]=ele;
if(array[k]!=NULL)
k->l.insert(ele);
}
}
void display()
{
for(int i=0;i<7;i++)
{ 
if(array[i]!=NULL)
cout<<"Element at ith position"<<i+1<<"is "<<array[i]<<endl;
else
cout<<"Element at ith position"<<i+1<<"is NULL"<<endl;
}}
};
int main()
{
int value;
Hashi h;
cout<<"Enter the number of elements to be inserted";
cin>>value;
h.insert(value);
h.display();
return 0;
}
