#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node*  right;
};


struct node* createnode(int data){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void preorder(struct node* n){
    if(n!=NULL){
        printf("%d ",n->data);
        preorder(n->left);
        preorder(n->right);
    }
}
void postorder(struct node* n){
    if(n!=NULL){        
        postorder(n->left);
        postorder(n->right);
        printf("%d ",n->data);
    }
}

void inorder(struct node* n){
    if(n!=NULL){
        inorder(n->left);
        printf("%d ",n->data);
        inorder(n->right);
    }
}

int main(){
struct node* a=createnode(10);
struct node* a1=createnode(20);
struct node* a1b=createnode(40);
struct node* a1c=createnode(50);
struct node* a2=createnode(30);
    
a->left=a1;
a->right=a2;

a1->left=a1b;
a1->right=a1c;


postorder(a);


    return 0;
}