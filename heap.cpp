#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int ele;
vector<int>v1;
priority_queue<int>p1;
priority_queue<int,vector<int>,greater<int> >p2;
vector<int>::iterator it;
v1.push_back(10);
v1.push_back(43);
v1.push_back(21);
v1.push_back(76);
v1.push_back(12);
make_heap(v1.begin(),v1.end());
for(it=v1.begin();it!=v1.end();it++)
cout<<*it<<" ";
cout<<"The maximum element is"<<v1.front()<<endl;
sort_heap(v1.begin(),v1.end());
cout<<"Sorted heap"<<endl;
for(it=v1.begin();it!=v1.end();it++)
cout<<*it<<" ";
cout<<endl;
cout<<"Max heap"<<endl;
for(int i=0;i<5;i++)
{
cout<<"Enter element to push";
cin>>ele;
p1.push(ele);
}

while(p1.empty()==false)
{
cout<<p1.top()<<" ";
p1.pop();
}
cout<<endl<<"Min heap"<<endl;
for(int i=0;i<5;i++)
{
cout<<"Enter element to push";
cin>>ele;
p2.push(ele);
}
while(p2.empty()==false)
{
cout<<p2.top()<<" ";
p2.pop();
}
return 0;
}
