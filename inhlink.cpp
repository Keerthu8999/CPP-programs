#include<iostream>
#include<malloc.h>
using namespace std;
class linkedlist
{
public:
struct node
{
int data;
struct node *next;
}*top=NULL,*front=NULL,*rear=NULL;
virtual void insert(int)=0;
virtual void deletes()=0;
virtual void display()=0;
};


class queue:public linkedlist
{
public:
void insert(int x)
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=NULL;
if(front==NULL&&rear==NULL)
{
front=rear=temp;
return;
}
rear->next=temp;
rear=temp;
}
void deletes()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp=front;
if(front==NULL)
return;
if(front==rear)
front=rear=NULL;
else
front=front->next;
free(temp);
}
void display()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp=front;
while(temp!=NULL)
{
cout<<temp->data<<"->";
temp=temp->next;
}
}
};


class stack:public linkedlist
{
public:
void insert(int x)
{
//int x;
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=top;
top=temp;
}
void deletes()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp=top;
top=top->next;
free(temp);
}
void display()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp=top;
while(temp!=NULL)
{
cout<<temp->data<<"->";
temp=temp->next;
}
}
};


int main()
{
linkedlist *l;
stack s;
queue q;
int op,el;
cout<<"ENTER 1 FOR QUEUE INSERTION"<<endl<<"2 FOR QUEUE DELETION"<<endl<<"3 FOR STACK INSERTION"<<endl<<"4 FOR STACK DELETION"<<endl;
for(int i=0;i<9;i++)
{
cout<<endl<<"Enter an option"<<endl;
cin>>op;
if(op==1)
{
cout<<"Enter the element to be pushed"<<endl;
cin>>el;
l=&q;
l->insert(el);
q.display();
}
if(op==2)
{
l=&q;
l->deletes();
q.display();
}
if(op==3)
{
cout<<"Enter the element to be pushed";
cin>>el;
l=&s;
l->insert(el);
s.display();
}
if(op==4)
{
l=&s;
l->deletes();
s.display();
}
}
return 0;
}





