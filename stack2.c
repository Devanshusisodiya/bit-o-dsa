#include <stdio.h>
#include <stdlib.h>

struct stack {
    int top;
    int maxSize;
    int *arr;
};

struct stack* createStack(int size){
    struct stack* ptr = (struct stack*)malloc(sizeof(struct stack));

    ptr->top = -1;
    ptr->maxSize = size;
    ptr->arr = (int*)malloc(size*sizeof(int));

    return ptr;
}

int isFull(struct stack* s){
    if(s->top == s->maxSize - 1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct stack* s){
    if(s->top == -1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack* s, int element){
    if(isFull(s) == 1){
        printf("overflow");
    }else{
        s->top = s->top + 1;
        s->arr[s->top] = element;
    }
}

int pop(struct stack* s){
    if(isEmpty(s)){
        printf("stack empty");
        return -1;
    }else{
        s->top = s->top - 1;
        return s->arr[s->top];
    }
}

void main() {
    int size;
    printf("enter size of stack : ");
    scanf("%d", &size);

    struct stack* s = createStack(size);
    printf("size of stack is : %d", s->maxSize);

    printf("\n\ncompiled\n\n");

    // taking stack input
    for(int i = 0; i < size; i++){
        int element;
        printf("enter : ");
        scanf("%d", &element);
        push(s, element);
    }
    printf("\n");

    //displaying stack
    for(int i = 0; i < s->top+1; i++){
        printf("%d", s->arr[i]);
    }
    printf("\n");

    //overflow
    push(s, 69);     // :)


}