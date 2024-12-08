
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return new;
}

void preorder(struct node *n)
{
    if (n != NULL)
    {
        preorder(n->left);
        printf("%d ", n->data);
        preorder(n->right);
    }
}

int main()
{
    struct node *a = createNode(50);
    struct node *b = createNode(10);
    struct node *c = createNode(40);
    struct node *b1 = createNode(30);
    struct node *b2 = createNode(20);

    a->left = b;
    a->right = c;
    b->left = b1;
    b->right = b2;

    preorder(a);

    return 0;
}