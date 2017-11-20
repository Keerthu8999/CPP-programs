#include<iostream>
using namespace std;
int a[30],choice,p,q;
void game(int turn)
{
if(turn==1)
{
cin>>choice;
if(choice==1)
a[0]/=2;
if(choice==2)
a[1]/=2;
if(choice==3)
a[2]/=2;
if(a[0]%2==1&&a[1]%2==1&&a[2]%2==1)
cout<<"heyyy";
}
if(turn==2)
{
cin>>choice;
if(choice==1)
a[0]/=2;
if(choice==2)
a[1]/=2;
if(choice==3)
a[2]/=2;
if(a[0]%2==1&&a[1]%2==1&&a[2]%2==1)
cout<<"heyyy";
}
}
int main()
{
int t,n,count1=0,count2=0,turn;
cout<<"Enter the number of test cases"<<endl;
cin>>t;
for(int i=0;i<t;i++)
{
cout<<"Enter the number of piles"<<endl;
cin>>n;
cout<<"Coins in each piles"<<endl;
for(int i=0;i<n;i++)
{
cin>>a[i];
}

while(a[0]%2==0&&a[1]%2==0&&a[2]%2==0)
{
cout<<"Enter whose turn";
cin>>turn;
game(turn);
}
}
return 0;
}
