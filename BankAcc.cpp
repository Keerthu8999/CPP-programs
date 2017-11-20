#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class Bank
{
public:
static char *fname;
static char *lname;
int min_bal;
static int withdrawals;
static int sacc_bal,cacc_bal,p,n,r,acc_no;
static float sinterest,cinterest;
int len1,len2;
public:
Bank()
{
len1=0;
fname=new char[len1+1];
len2=0;
lname=new char[len2+1];
}
Bank(int a,char *f, char *l)
{
acc_no=a;
len1=strlen(f);
f=new char[len1+1];
strcpy(fname,f);
len2=strlen(l);
l=new char[len2+1];
strcpy(lname,l);
strcat(fname,lname);
}
void get_intdetails()
{
cout<<"Enter the principal,Rate of interest,No.of years";
cin>>p>>n>>r;
}
void getdata()
{
cout<<"Enter Account number";
cin>>acc_no;
cout<<"Enter the first and last name";
cin>>fname>>lname;

}
int retacc_no()
{
return acc_no;
}
char* retfname()
{
return fname;
}
char* retlname()
{
return lname;
}

};


class Savings:virtual public Bank
{
public:Savings(){}
void get_savbal()
{
cout<<"Enter Savings Account balance";
cin>>sacc_bal;
}
int getsav_bal()
{
return sacc_bal;
}
int calc_bal()
{
cout<<"Enter the minimum balance";
cin>>min_bal;
cout<<"Calculating Balance..."<<endl;
if(sacc_bal<min_bal)
{
cout<<"Account balance is less than minimum balance"<<endl<<endl;
sacc_bal=sacc_bal-100;
//cout<<"Account balance is: "<<acc_bal<<endl;
return sacc_bal;
}
else
{
cout<<"Account balance is greater than minimum balance"<<endl<<endl;
}
}
int calc_int()
{
//cout<<"Calculating Interest..."<<endl;
cinterest=p*((1+r/100)^n);
//cout<<"Compound interest is: "<<cinterest<<endl;
return cinterest;
}
int deposit_amount()
{
int deposit;
cout<<"Enter the amount to be deposited";
cin>>deposit;
sacc_bal=sacc_bal+deposit;
cout<<endl;
//cout<<"Balance is: "<<acc_bal<<endl;
return sacc_bal;
}
void calc_withdrawals()
{
cout<<"Enter the no.of withdrawals taken so far(Max:52)";
cin>>withdrawals;
cout<<"Calculating Withdrawals..."<<endl;
if(withdrawals<52)
cout<<"Withdrawals allowed!"<<endl<<endl;
else
cout<<"Withdrawals: "<<withdrawals<<" is greater than 52"<<endl<<endl;
}
};


class Current: public virtual Bank 
{
public:
void get_cavbal()
{
cout<<"Enter Current Account balance";
cin>>cacc_bal;
}
int getcav_bal()
{
return cacc_bal;
}
int calc_ball()
{
if(cacc_bal<0)
cacc_bal=cacc_bal-p;
return cacc_bal;
}
int deposit_amount()
{
int deposit;
cout<<"Enter the amount to be deposited";
cin>>deposit;
cacc_bal=cacc_bal+deposit;
cout<<endl;
//cout<<"Balance is: "<<acc_bal<<endl;
return cacc_bal;
}
int calc_int()
{
//cout<<"Calculating Interest..."<<endl;
sinterest=(p*n*r)/100;
//cout<<"Simple Interest is :"<<sinterest<<endl;
return sinterest;
}
};


class display:public Savings,public Current
{
public:
void displdetails()
{
cout<<endl;
cout<<"Account number:"<<retacc_no()<<endl;
cout<<"Account user First name:"<<retfname()<<endl;
cout<<"Account user Last name:"<<retlname()<<endl;
cout<<"Savings Account balance"<<sacc_bal<<endl;
cout<<"Current Account balance"<<cacc_bal<<endl;
cout<<"Simple interest"<<sinterest<<endl;
cout<<"Compound Interest"<<cinterest<<endl;
cout<<"Withdrawals allowed:"<<52-withdrawals<<endl;
}
};


int Bank::sacc_bal;
int Bank::cacc_bal;
int Bank::withdrawals;
int Bank::acc_no;
int Bank::p;
int Bank::n;
int Bank::r;
float Bank::sinterest;
float Bank::cinterest;
char* Bank::fname;
char* Bank::lname;


int main()
{
Bank b;
Savings s;
Current c;
display d;
b.getdata();
b.get_intdetails();
s.get_savbal();
s.calc_bal();
s.calc_int();
s.deposit_amount();
s.calc_withdrawals();
c.get_cavbal();
c.deposit_amount();
c.calc_int();
d.displdetails();
return 0;
}






  

