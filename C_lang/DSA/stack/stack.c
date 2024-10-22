#include<stdio.h>
#include<stdlib.h>

struct stack{
    int r,size;
    int* arr;
}s;

int isfull(struct stack *s){
    if(s->size-1==s->r)return 1;
    return 0;
}
int isempty(struct stack *s){
    if(s->r==-1)return -1;
    return 0;
}

void push(struct stack *s,int val){
    if(isfull(s))printf("Stack is full\n");
    else{s->r++;
        s->arr[s->r]=val;
        printf("Element inserted: %d\n",val); 
    }
}

int pop(struct stack *s){
    if(isempty(s))printf("Stack is underflow\n");
    else{int a=s->arr[s->r];
        s->r--;
        return a;
    }
    return -1;
}

int peek(struct stack *s){
    if(isempty(s))printf("Stack is empty\n");
    else{
        for(int i=s->r;i>=0;i--){
            printf("%d ",s->arr[i]);
        }
    }
}


int main(){

    s.size=4;
    s.r=-1;
    s.arr=(int*)malloc(s.size*sizeof(int));
    
    int choice, value;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&s, value);
                break;
            case 2:
                value = pop(&s);
                if (value != -1) {
                    printf("Popped: %d\n", value);
                }
                break;
            case 3:
                peek(&s);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
} 