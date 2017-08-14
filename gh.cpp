#include<iostream>
using namespace std;
#include<string.h>
class string
{
char *name;
int length;
public:
string()
{
length=0;
name = new char[length+1];
}
string(char *n)
{
length=strlen(n);
name= new char [length+1];
strcpy(name,n);
}
void display()
{
cout<<"String:"<<name;
}
string operator+(string s)
{
string temp;
strcpy(temp.name,name);
strcat(temp.name,s.name);
return temp;
}
};
int main()
{
string s1("Hello");
string s2("Welcome");
string s3;
s1.display();
s2.display();
s3=s1+s2;
s3.display();
return 0;
} 
