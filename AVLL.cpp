#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct avlnode
{
int data;
struct avlnode *left;
struct avlnode *right;
}*root;
class avltree
{
avltree(){root=NULL;}
void height(avlnode *temp);
void diff(avlnode *temp);
avlnode *balance(avlnode *temp);
avlnode *ll_rotation(avlnode *);
avlnode *lr_rotation(avlnode *);
avlnode *rl_rotation(avlnode *);
avlnode *rr_rotation(avlnode *);

};
int avltree::height(avlnode *temp)
{
int l_height=height(temp->left);
int r_height=height(temp->right);
int max_height=max(l_height,r_height);
return max_height;
}
int avltree::diff(avlnode *temp)
{
int l_height=height(temp->left);
int r_height=height(temp->right); 
int b_factor=l_height=r_height;
return b_factor;
}
avlnode *avltree::balance(avlnode *temp)
{
int bal=diff(temp);
if(bal>1)
{
if(diff(temp->left)>0)
temp=ll_rotation(temp);
else
temp=lr_rotation(temp);
}
if(bal<-1)
{
if(diff(temp->right)>0)
temp= rl_rotation(temp);
else
temp=rr_rotation(temp);
}
}
avlnode *avltree::ll_rotation(avlnode *parent)
{
avlnode *temp;
temp=parent->left;
parent->left=temp->right;
temp->right=parent;
return temp;
}
avlnode *avltree::rr_rotation(avlnode *parent)
{
avlnode *temp;
temp=parent->right;
parent->right=temp->left;
temp->right=parent;
return temp;
}
avlnode *avltree::rl_rotation(avlnode *parent)
{
avlnode *temp;
temp=parent->right;
parent->right=ll_rotation(temp);
//temp->right=parent;
return rr_rotation(parent);
}
avlnode *avltree::lr_rotation(avlnode *parent)
{
avlnode *temp;
temp=parent->left;
parent->left=rr_rotation(temp);
//temp->right=parent;
return ll_rotation(parent);
}

