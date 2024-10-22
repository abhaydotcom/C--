#include<stdio.h>

#include<stdlib.h>


struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

struct node* search(struct node* n,int k){
    if(n==NULL)return NULL;
    if(n->data==k)return n;
    else if(k<n->data)  return search(n->left,k);
    else return search(n->right,k);
}

int main(){

struct node* a=createNode(50);
struct node* b=createNode(20);  
struct node* c=createNode(60);
struct node* b1=createNode(10);
struct node* b2=createNode(30);

a->left=b;
a->right=c;
b->left=b1;
b->right=b2;

struct node* z=search(a,50);
if(z!=NULL)printf("%d : is Founded!!!",z->data);
else printf("NOT FOUNDED!!!");

    return  0;
}