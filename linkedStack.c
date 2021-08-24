#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node* n;
};

void push(struct node* node, int value){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->value = value;
    newNode->n = NULL;

    node->n = newNode;    
}

void main() {

    struct node* head;
    head = (struct node*)malloc(sizeof(struct node));
    head->value = 1;

    push(head, 2);


    printf("\n\ncompiled\n\n");

    printf("\n\n %d \n\n", head->n->value);
}