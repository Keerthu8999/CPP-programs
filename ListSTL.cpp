#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
list<int>l;
l.push_back(5);
l.push_back(4);
l.push_back(3);
l.push_back(13);
l.push_back(23);
l.push_back(33);
l.push_front(1);
l.push_front(2);
l.push_front(13);
l.push_front(22);
list<int>::iterator it;
for(it=l.begin();it!=l.end();it++)
cout<<*it<<" ";
cout<<endl;
it=l.begin();
l.insert(it,2,14);
it=l.begin();
++it;
l.erase(it);
for(it=l.begin();it!=l.end();it++)
cout<<*it<<" ";
l.pop_front();
l.pop_back();
cout<<endl;
for(it=l.begin();it!=l.end();it++)
cout<<*it<<" ";
l.remove(13);
cout<<"Front:"<<l.front()<<endl;
cout<<"Back:"<<l.back()<<endl;
cout<<"Size:"<<l.size()<<endl;
//for(int i=0;i<l.size();i++)
//cout<<l.reverse(i)<<" ";
return 0;
}
