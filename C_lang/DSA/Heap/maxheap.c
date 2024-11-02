#include<stdio.h>
 typedef struct node{
    int arr[10];
    int size;
}max;

void heapsize(max *n){
    n->size=0; 
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insert(max* n,int val){
    n->size++;
    int index=n->size;
    n->arr[index]=val;
    while(index>1){
        int p=index/2;
        if(n->arr[p]<n->arr[index]){
           swap(&n->arr[p],&n->arr[index]);
        }else return;
    }
}

void delete(max* n){
    if(n->size==0)printf("Nothiing to delete\n");

    n->arr[1]=n->arr[n->size];
    n->size--;
    int i=1;
    while(i<n->size){
        int leftidx=2*i;
        int rightidx=2*i+1;
        if(leftidx<n->size&& n->arr[i]<n->arr[leftidx]){
            swap(&n->arr[i],&n->arr[leftidx]);
            i=leftidx;
        }
        else if(rightidx<n->size && n->arr[i]<n->arr[rightidx]){
            swap(&n->arr[i],&n->arr[rightidx]);
            i=rightidx;
        }else return;
    }
}

void display(max* n){
    for(int i=1;i<=n->size;i++){
        printf("%d ",n->arr[i]);
    }
                
}


int main(){

max heap;

heapsize(&heap);
insert(&heap,10);
insert(&heap,15);
insert(&heap,20);
insert(&heap,17);
insert(&heap,8);
insert(&heap,18);
insert(&heap,30);

delete(&heap);
delete(&heap);
display(&heap);

    return 0;
}