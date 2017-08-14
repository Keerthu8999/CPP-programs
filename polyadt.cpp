#include<iostream>
#include<malloc.h>
using namespace std;

class polyadt
{
typedef struct node
{
float coeff;
int exp;
struct node *next;
}*poly;
public:
friend istream& operator >> (istream& din, polyadt& obj1);
friend ostream& operator << (ostream& dout, polyadt obj);
polyadt(float x,int y)
{
poly=NULL;
coeff=x;
exp=y;
}
void operator + ()
{
struct node *p1,*p2,*temp;
p1=poly;
p2=poly;
while(p1!=NULL&&p2!=NULL)
{
temp=(struct node*)malloc(sizeof(struct node));
if(p1->exp==p2->exp)
{
temp->coeff=p1->coeff+p2->coeff;
temp->next=NULL;
temp->exp=p1->exp;
p1=p1->next;
p2=p2->next;
}
else if(p1->exp>p2->exp)
{
temp->coeff=p1->coeff;
temp->next=NULL;
temp->exp=p1->exp;
p1=p1->next;
}
else
{
temp->coeff=p2->coeff;
temp->next=NULL;
temp->exp=p2->exp;
p2=p2->next;
}
}
};
istream& operator >> (istream& din, polyadt& obj1)
{
din>>obj1.coeff>>obj1.exp;
}
ostream& operator << (ostream& dout, polyadt obj)
{
dout<<obj.coeff<<"^"<<obj.exp;
}
int main()
{

polyadt v1(8,2);
polyadt v2(4,2);
polyadt p;
+p;
return 0;
}
