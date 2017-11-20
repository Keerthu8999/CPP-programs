#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
int data;
struct node *next;
}*top=NULL;
class linked
{
public:
void insertatbeg(int x)
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=top;
top=temp;
}
void insertatend(int x)
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=NULL;
struct node *tempo;
tempo=(struct node*)malloc(sizeof(struct node));
tempo=top;
while(tempo->next!=NULL)
{
tempo=tempo->next;
}
tempo->next=temp;
}
void deleteatbeg()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp=top;
top=top->next;
free(temp);
}
void deleteatend()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
struct node *tempo;
tempo=(struct node*)malloc(sizeof(struct node));
tempo=top;
while(tempo->next!=NULL)
{
temp=tempo;
tempo=tempo->next;
}
temp->next=tempo->next;
free(tempo);
}
void display()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp=top;
while(temp!=NULL)
{
cout<<temp->data;
temp=temp->next;
}
}
};
int main()
{
linked l;
int op,el;
for(int i=0;i<7;i++)
{
cout<<"Enter an option"<<endl;
cin>>op;
if(op==1)
{
cout<<"Enter the element to be pushed";
cin>>el;
l.insertatbeg(el);
l.display();
}
if(op==2)
{
cout<<"Enter the element to be pushed";
cin>>el;
l.insertatend(el);
l.display();
}
if(op==3)
{
l.deleteatbeg();
l.display();
}
if(op==4)
{
l.deleteatend();
l.display();
}
}
return 0;
}
