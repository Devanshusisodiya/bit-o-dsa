#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int* arr;
};

struct stack* createStack(int size) {
    struct stack* stack = (struct stack*)malloc(sizeof(struct stack));
    stack->size = size;
    stack->top = -1;
    return stack;
}

int isFull(struct stack* stack) {
    if(stack->top == stack->size-1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct stack* stack) {
    if(stack->top == -1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack* stack, int element) {
    if(isFull(stack) == 1){
        printf("overflow");
    }else{
        stack->top = stack->top + 1;
        stack->arr[stack->top] = element;
    }
}

int pop(struct stack* stack) {
    if(isEmpty == 1){
        printf("underflow");
        return -1;
    }else{
        stack->top = stack->top - 1;
        return stack->arr[stack->top];
    }
}

void main() {
    
}