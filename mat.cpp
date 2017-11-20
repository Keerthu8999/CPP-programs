#include<iostream>
using namespace std;
class matri
{
int p[10][10];
int r,c;
public:
matri()
{}
matri(int row,int col)
{
r=row;
c=col;
//p=new int *[r];
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
p[i][j]=0;
//p[i]=new int [c];
}
}
}
void getdata()
{
int row,col;
cin>>row>>col;
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
cin>>p[i][j];
}
}
}
void putdata()
{
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
cout<<p[i][j]<<" ";
}
cout<<endl;
}
}
void add(matri a,matri b)
{
matri res;
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
res.p[i][j]=a.p[i][j]+b.p[i][j];
}
}
}
};
int main()
{
matri m1(3,3),m2,m3,m4,m5;
cout<<"HELLO";
m2.getdata();
cout<<"HELLO";
m3.getdata();
m4.add(m2,m3);
m4.putdata();
return 0;
}

