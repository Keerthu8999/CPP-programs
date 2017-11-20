#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
int ele;
priority_queue<int>p1;
cout<<"max heap"<<endl;
for(int i=0;i<5;i++)
{
cout<<"Enter element to push";
cin>>ele;
p1.push(ele);
}
cout<<"The max heap is";
while(p1.empty()==false)
{
cout<<p1.top()<<" ";
p1.pop();
}
priority_queue<int,vector<int>,greater<int> >p2;
cout<<endl<<"min heap"<<endl;
for(int i=0;i<5;i++)
{
cout<<"Enter element to push";
cin>>ele;
p2.push(ele);
}
cout<<"The min heap is";
while(p2.empty()==false)
{
cout<<p2.top()<<" ";
p2.pop();
}
return 0;
}
