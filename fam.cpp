

#include<iostream>
#include<string.h>
#include<malloc.h>
#include<string>
using namespace std;
struct Node{
char data[50];
struct Node* right;
struct Node* left;
};

typedef struct Node* NODE;

NODE createNode(char data[]){
    NODE newNode = (NODE) malloc (sizeof(struct Node));

newNode->left = NULL;
newNode->right = NULL;
strcpy(newNode->data,data);
return (newNode);
}

void insertNode(NODE* head,char data[]){

    NODE newNode = createNode(data);
    NODE hold_the_head = *head;
    if(*head == NULL){
        *head = newNode;
        (*head)->right = NULL;
        (*head)->left = NULL;
        return;
    }

    while(1){
        if((newNode->data>(*head)->data)&&((*head)->right==       NULL)){
            (*head)->right = newNode;
            *head = hold_the_head;
            return;
        }
        else if( newNode->data > (*head)->data ){
            (*head) = (*head)->right;
        }

        else if( (newNode->data < (*head)->data) && ( (*head)->left ==   NULL ) ){
            (*head)->left = newNode;
            *head = hold_the_head;
            return;
        }
        else if( newNode->data < (*head)->data ){
            (*head) = (*head)->left;
        }
    }
}

void inOrderTraversal(NODE node){

    if(node == NULL)
       return;
    inOrderTraversal(node->left);
    cout<<node->data<<"\t";
    inOrderTraversal(node->right);
}

int main(){

    NODE head = NULL;
    insertNode(&head,"karan");
    insertNode(&head,"sameer");
    insertNode(&head,"palak");
    insertNode(&head,"jagdish");
    insertNode(&head,"naman");
    insertNode(&head,"umang");
    insertNode(&head,"chandu");

    inOrderTraversal(head);
    cout<<endl;
    return 0;
}
