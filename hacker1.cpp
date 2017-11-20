#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> v;
    vector <int>::iterator it;
    int t;
    int n,el;
    cout<<"The no of test cases"<<endl;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    cout<<"Enter the no of integers";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>el;
        v.push_back(el);   
        
        //cout<<el;
    }
    std::sort(v.begin(),v.end());
    for(it=v.begin();it!=v.end();it++)
    {
    	cout<<*it;
    }
    v.clear();
    }

  
   
    return 0;
}
