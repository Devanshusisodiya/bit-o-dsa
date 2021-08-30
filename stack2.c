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
        int popped = s->arr[s->top];
        s->top = s->top - 1;
        return popped;
    }
}

int peek(struct stack* stack) {
    return stack->arr[stack->top];
}

void traverse(struct stack* stack){
    printf("\n\ncurrent stack\n");
    for(int i = 0; i < stack->top + 1; i++){
        printf("%d\n", stack->arr[i]);
    }
    printf("\n\n");
}

void main() {
    int size;
    printf("enter size of stack : ");
    scanf("%d", &size);

    struct stack* s = createStack(size);
    printf("size of stack is : %d", s->maxSize);

    printf("\n\ncompiled\n\n");

    // postfix operation
    int ctr = 0, choice;
    do{
        int operand;
        char operator[1];
       
        printf("1. operand\n");
        printf("2. operator\n");
        printf("3. traverse\n");
        printf("4. eval\n");
        printf("5. quit\n");
        scanf("%d", &choice);

        int a = 0, b = 0, c = 0;

        switch (choice){
        case 1:
            printf("enter operand : ");
            scanf("%d", &operand);
            push(s, operand);
            break;
        case 2:
            printf("enter operator : ");
            scanf("%s", operator);
            if(operator[0] == '+'){
                b = pop(s);
                a = pop(s);
                c = a + b;
                // printf("%d %d %d\n", c, a, b);
                push(s, c);

            }else if(operator[0] == '-'){
                b = pop(s);
                a = pop(s);
                c = a - b;
                push(s, c);

            }else if(operator[0] == '*') {
                b = pop(s);
                a = pop(s);
                c = a * b;
                push(s, c);

            }else if(operator[0] == '/') {
                b = pop(s);
                a = pop(s);
                c = a / b;
                push(s, c);

            }else{
                printf("operator not valid\n");
            }
            break;
        case 3:
            traverse(s);
            break;
        case 4:
            printf("\n\ncurrent evaluation : %d\n\n", s->arr[s->top]);
            break;
        case 5:
            exit(0);
            break;
        default:
            break;
        }
    }while(ctr < 100);
}