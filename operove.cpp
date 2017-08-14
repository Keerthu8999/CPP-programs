#include<iostream>
#include<string.h>
using namespace std;
class concat
{
char stri[10];
public:
concat()
{
}
void getstr()
{
cout<<"Enter the string";
cin>>stri;
}
void print()
{
cout<<stri<<endl;
}
concat operator+(string);
};
concat concat::operator+(string& str)
{
strcat(stri,str.stri);
return stri;
}
int main()
{
concat st1;
concat st2;
st1.getstr();
st2.getstr();
concat st3;
st3=st1+st2;
st1.print();
st2.print();
st3.print();
return 0;
}
