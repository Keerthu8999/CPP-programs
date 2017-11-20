#include <iostream>
#include <string.h>
#include <fstream>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct node
{
 char name[20];
 node *left;
 node *right;
};
class family
{
 public:
	void addleft(node *);
	void addright(node *);
	void editleft(node *);
	void editright(node *);
	void delleft(node *);
	void delright(node *);
	void findleft(node *);
	void findright(node *);
	void searchleft(node *);
	void searchright(node *);
};

void family::addleft(node *kaliwa)
{
 cout<<"Enter Name: ";gets(kaliwa->name);
}
void family::findleft(node *hanapleft)
{
 while(hanapleft!=NULL)
	{
	 cout<<hanapleft->name;
	 hanapleft=hanapleft->left;cout<<"\n";
	}
}
void family::addright(node *kanan)
{
 cout<<"Enter Name: ";gets(kanan->name);
}
void family::findright(node *hanapright)
{
 while(hanapright!=NULL)
	{
	 cout<<hanapright->name;
	 hanapright=hanapright->right;cout<<"\n";
	}
}
void family::searchleft(node *hanapinleft)
{
 char findname[80];
 cout<<"Type a name: ";gets(findname);
 while(hanapinleft!=NULL)
	{if(strcmp(findname,hanapinleft->name)==0)
	{cout<<"Element exist!";}
 hanapinleft=hanapinleft->left;
	}
}
void family::searchright(node *hanapinright)
{
 char findname2[80];
 cout<<"Type a name: ";gets(findname2);
 while(hanapinright!=NULL)
	{if(strcmp(findname2,hanapinright->name)==0)
	 {cout<<"Element exist!";}
	hanapinright=hanapinright->right;
	}
}
void family::delleft(node *)
{
 char delname[80];
 cout<<"Type name: ";gets(delname);
}
void family::delright(node *)
{
 char delname2[80];
 cout<<"Type name: ";gets(delname2);
}
void main()
{
 family pamilya; //Object of Class
 int option;
 ofstream out_file; //cout sa Filestream
 char file[80];
 char familyname[80];
 node *l1,*l2,*r1,*r2,master;
	l1 =new node;
	l2=l1;
	r1=new node;
	r2=r1;
	char a,b;
 cout<<"Please Enter Filename: ";gets(file);
 out_file.open(file);
 cout<<"Please Enter the Family Name: ";gets(familyname);
 cout<<"\nNow Please Enter the Ancestor's Name: ";gets(master.name);
 cout<<"\n\nThank You! Press Any Key to Continue";
 
 clrscr();
int nX = 2, nY = 2; //pang scroll
int ch; //inequate sa getch()
do{
 cout<<familyname<<" Family Tree Generator";
 cout<<"\n[1] Add Element";
 cout<<"\n[2] Edit Element";
 cout<<"\n[3] Delete Left Child";
 cout<<"\n[4] Delete Right Child";
 cout<<"\n[5] Find a Left Child";
 cout<<"\n[6] Find a Right Child";
 cout<<"\n[7] Display All Left Children";
 cout<<"\n[8] Display All Right Children";
 cout<<"\n[9] Summarize in the Notepad";
 cout<<"\n[10] Exit";
cin>>option;
switch (option)
{
 case 1: //Every element will be asked to input left and right childs, pero optional un kung ndi nya llagyan...
 {
 flagleft:
 clrscr();
 cout<<"Left Child:\n";
	pamilya.addleft(l2);
	cout<<"Do You Want to Add Another Left Child? [y/n]";
	cin>>a;
 if(a=='y')
	{l2->left=new node;
	l2=l2->left;
	goto flagleft;}
 l2->left=NULL;
	
 }
 {
 flagright:
	clrscr();
	cout<<"Right Child:\n";
	pamilya.addright(r2);
	cout<<"Do You Want to Add Another Right Child? [y/n]";
	cin>>b;
 if(b=='y')
	{r2->right=new node;
	r2=r2->right;
	goto flagright;}
	r2->right=NULL;
	
	break;
 }
 case 2: //String Compare, if yes, overwrite, if no matches, tatanungin ule
 {
	cout<<"Type new name: ";
	
	break;
 }
 case 3: //String Compare na lang siguro ule...
 {
	pamilya.delleft(l1);
	cout<<"Deleted!";
	
	break;
 }
 case 4:
 {
	pamilya.delright(r1);
	cout<<"Deleted!";
	
	break;
 }
 case 5: //String Compare
 {clrscr();
	pamilya.searchleft(l1);
	
	break;
 }
 case 6: //String Compare
 {clrscr();
	pamilya.searchright(r1);
	
	break;
 }
 case 7: //Lahat ng Left
 {
	cout<<"\n\n\n\nThe following elements are all the left childs: \n";
	pamilya.findleft(l1);
	
	break;
 }
 case 8: //Lahat ng Right
 {
	cout<<"\n\n\n\nThe following elements are all the right childs: \n";
	pamilya.findright(r1);
 
 break;
 }
 case 9: //Naka notepad?? Pano iddrawing ung branches??
 {
 
 break;
 }
 case 10:
 {
	cout<<"\n\nThank You!";
	break;
 }
 default:
 cout<<"\n\nInvalid Option!";
 
 break;
}
 }while(option!=10);
}

