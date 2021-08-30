#include <stdio.h>
#include <stdlib.h>

// definition of a queue
struct queue {
    int size;
    int front;
    int rear;
    int* arr;
};

struct queue* createQueue(int size){
    struct queue* queue = (struct queue*)malloc(sizeof(queue));
    queue->size = size;
    queue->front = 0;
    queue->rear = -1;
    queue->arr = (int*)malloc(size*sizeof(int));

    return queue;
}

int isFull(struct queue* queue){
    if(queue->rear == queue->size - 1){
        printf("\n\noverflow\n\n");
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct queue* queue){
    if(queue->rear == -1){
        printf("\n\nunderflow\n\n");
        return 1;
    }else{
        return 0;
    }
}

void enQueue(struct queue* queue, int element){
    if(isFull(queue) == 1){
        printf("queue is full");
    }else{
        queue->rear = queue->rear + 1;
        queue->arr[queue->rear] = element;
    }
}

int deQueue(struct queue* queue){
    if(isEmpty(queue) == 1){
        printf("queue is empty");
        return -1;
    }else{
        int deQueued = queue->arr[queue->front];
        for(int i = 0; i < queue->rear + 1; i++){
            queue->arr[i] = queue->arr[i+1];
        }
        queue->rear = queue->rear - 1;
        return deQueued;
    }
}

void main() {

}