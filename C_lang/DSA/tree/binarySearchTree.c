#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
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

struct node* search(struct node* n,int key){
    while(n!=NULL){
        if(n->data==key)return n;
        else if(key<n->data)return search(n->left,key);
        else return search(n->right,key);
    }
}

void insert(struct node* n,int key){
    struct node* pre=NULL;
    struct node* new;
    while(n!=NULL){
        pre=n;
        if(n->data==key)return;
        else if(key<n->data)n=n->left;
        else n=n->right;
    }
    new=createNode(key);
    if(key<pre->data)pre->left=new;
    else pre->right=new;
}

struct node* presuccesor(struct node* n){
    n=n->left;
    while(n!=NULL){
        n=n->right;
    }
    return n;
}

struct node* delete(struct node* n,int key){
    struct node* pre=NULL;
    if(n==NULL)return NULL;
    if(n->left==NULL && n->right==NULL){
        free(n);
        return NULL;
    }
    if(key<n->data)n->left=delete(n->left,key);
    else if(key>n->data)n->right=delete(n->right,key);
    else{
        pre=presuccesor(n);
        n->data=pre->data;
        n->left=delete(n->left,pre->data);
    }
    return n;
}

int main(){
struct node* a=createNode(50);
struct node* b=createNode(30);
struct node* c=createNode(60);
struct node* b1=createNode(20);
struct node* b2=createNode(40);

a->left=b;
a->right=c;
b->left=b1;b->right=b2;



// struct node* x=search(a,40);
// if(x!=NULL)printf("%d is founded",x->data);
// else printf("Not founded");


insert(a,70);
insert(a,10);
 preorder(a);
printf("\n");
delete(a,30);
 preorder(a);


    return 0;
}