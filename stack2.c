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

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    for(int i = 0; i < s->top+1; i++){
        printf("%d", s->arr[i]);
    }

    int popped = pop(s);

    printf("\n\nafter pop\n\n");

    for(int i = 0; i < s->top+1; i++){
        printf("%d", s->arr[i]);
    }

    printf("\n\n");
    printf("popped element %d", popped);


    // int k = 0, choice;
    // do{
    //     printf("print \n");
    //     printf("enter \n");
    //     printf("3 to quit\n");
    //     scanf("%d", &choice);
    //     switch (choice){
    //     case 1:
    //         printf("%d", k);
    //         break;
    //     case 2:
    //         scanf("%d", &k);
    //     default:
    //         printf("\n");
    //         // break;
    //     }
    // }while(choice != 3);

}