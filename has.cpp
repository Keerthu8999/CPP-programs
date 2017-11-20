#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class Hashing
{
int size,index;
int *has;
public:
Hashing(){size=0;has=new int[size+1];}
Hashing(int s)
{
size=s;
has=new int[size+1];
for(int i=0;i<size;i++)
{
has[i]=-1;
}
}
int hashfn(int x)
{

return x%7;
}
void insert()
{
int k;
//cout<<"HHHH"<<endl;
char str;
cin>>str;
//cout<<"HHHH"<<endl;
k=int(str);
index=hashfn(k);
has[index]=k;
//cout<<has[index]<<endl;
}
void display()
{
for(int i=0;i<size;i++)
{
char c;
c=char(i);
cout<<has[c]<<" ";
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
h.insert();
h.insert();
h.insert();
h.display();
return 0;
}

