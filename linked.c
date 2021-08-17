#include <stdio.h>
#include <stdlib.h>

struct Node
{
    /* data */
    int value;
    struct Node* node;
};

void printList(struct Node* n);

void main(){
    // array of elements to fetch from
    int elems[] = {1,2,3,4,5};
    int lenElems = sizeof(elems) / sizeof(int);
    
    struct Node *head, *temp, *curr;

    for(int i=0 ; i<lenElems; i++){
        
        curr = (struct Node *)malloc(sizeof(struct Node));
        curr->value = elems[i];

		//7
		if(i==0){
			head = temp = curr;
		}else{
			//8
			temp->node = curr;
			temp = curr;
		}
	}


    printf("compiled");
    temp->node = NULL;
    temp = head;
    printList(temp);
    return;   
}

void printList(struct Node* n){
    while (n != NULL){
        printf("%d\n", n->value);
        n = n->node;
    }
}