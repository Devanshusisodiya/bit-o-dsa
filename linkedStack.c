#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node* n;
};

struct node* push(struct node* node, int value){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->value = value;
    newNode->n = node; 

    return newNode;
}

void main() {

    struct node* head;
    head = (struct node*)malloc(sizeof(struct node));
    head->value = 1;
    head->n = NULL;

    struct node* first = push(head, 2);


    printf("\n\ncompiled\n\n");

    printf("\n\n %d \n\n", first->value);
}