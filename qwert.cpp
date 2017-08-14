#include<iostream>
using namespace std;
#include<string.h>
class stringo
{
char *name;
int length;
public:
stringo()
{
length=0;
name = new char[length+1];
}

void display()
{
cout<<"String:"<<name;
}
stringo operator+(stringo s)
{
stringo temp;
strcpy(temp.name,name);
strcat(temp.name,s.name);
return temp;
}
};
int main()
{
stringo s1("Hello");
stringo s2("Welcome");
stringo s3;
s1.display();
s2.display();
s3=s1+s2;
s3.display();
return 0;
} 
