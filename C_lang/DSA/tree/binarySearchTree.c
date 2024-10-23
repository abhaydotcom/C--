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

// *****************TRAVERSAL****************
void inorder(struct node* n){
    if(n!=NULL){
        inorder(n->left);
        printf("%d ",n->data);
        inorder(n->right);
    }
}


// Searching*****************************************
struct node* search(struct node* n,int k){
    if(n==NULL)return NULL;
    if(n->data==k)return n;
    else if(k<n->data)  return search(n->left,k);
    else return search(n->right,k);
}

// Insetion****************************//

void insert(struct node* n,int key){
    struct node* prev=NULL;
    struct node* new;
    while(n!=NULL){
        prev=n;
        if(n->data==key)return;
        else if(key<n->data)n=n->left;
        else n=n->right;
    }
    new=createNode(key);
    if(key<prev->data)prev->left=new;
    else prev->right=new;

}

// *****************DELETION******************************
struct node* inorderpre(struct node* n){
    n=n->left;
    while(n->right!=NULL){
        n=n->right;
    }
    return n;
}


struct node* delete(struct node* n,int key){
    struct node* pre;
    if(n==NULL)return NULL;
    if(n->left==NULL && n->right==NULL){
        free(n);
        return NULL;
    }

    if(key<n->data)n->left=delete(n->left,key);
    else if(key>n->data)n->right=delete(n->right,key);
    else{
        pre=inorderpre(n);
        n->data=pre->data;
        n->left=delete(n->left,pre->data);

    }
    return n;
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

// struct node* z=search(a,50);
// if(z!=NULL)printf("%d : is Founded!!!",z->data);
// else printf("NOT FOUNDED!!!");

insert(a,40);
inorder(a);
delete(a,10);
printf("\n");
inorder(a);


    return  0;
}