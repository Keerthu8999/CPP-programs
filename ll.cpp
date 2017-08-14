#include<iostream>
#include<malloc.h>
using namespace std;
template <class T>
class linkedlist
{
public:
struct node
{
T data;
struct node *next;
node *top;
node *front;
node *rear;
node (T val):data(val),top(NULL),front(NULL),rear(NULL)
{}
};
template <class T>
class queue:public linkedlist
{
public:
void insert_queue(T x);
void delete_queue();
void display_queue();
};

