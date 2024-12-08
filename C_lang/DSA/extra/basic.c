#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};
 
 struct node* createNode(int val){
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=val;
    new->left=NULL;
    new->right=NULL;
    return new;
 }

 void preorder(struct node* n){
    if(n!=NULL){
        printf("%d ",n->data);
        preorder(n->left);
        preorder(n->right);
    }
 }

 void inorder(struct node* n){
    if(n!=NULL){
        inorder(n->left);
        printf("%d ",n->data);
        inorder(n->right);
    }
 }

 void postorder(struct node* n){
    if(n!=NULL){
        postorder(n->left);
        postorder(n->right);
        printf("%d ",n->data);
    }
 }


 struct node* bstSearch(struct node* n,int key){
    while(n!=NULL){
        if(n->data==key)return n;
        else if(key<n->data)return bstSearch(n->left,key);
        else return bstSearch(n->right,key);
    }
 }

 int main(){
    struct node* a=createNode(50);
    struct node* b=createNode(40);
    struct node* c=createNode(60);
    struct node* b1=createNode(30);
    struct node* b2=createNode(45);
    struct node* c1=createNode(55);
    struct node* c2=createNode(65);

    //linking  treee;
    a->left=b;
    a->right=c;
    b->left=b1;
    b->right=b2;
    c->left=c1;
    c->right=c2;

    struct node* x=bstSearch(a,65);

    if(x!=NULL){
        printf("%d is founded! ",x->data);
    }else printf("Not Founded");

  
    

    return 0;
 }