#include <stdio.h>
#include <stdlib.h>

int* delete(int *arr, int element, int index, int len){
    int i = 0;
    for(int j = 0; j < len; j++){
        if(j == index){
            continue;
        }else{
            arr[i] = arr[j];
            i += 1;
        }
    }
    return arr;
}

void main(){

    int len;
    scanf("%d\n", &len);
    int arr[len];
    
    for(int i = 0; i < len; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");
    
    for(int i = 0; i < len; i++){
        printf("%d", arr[i]);
    }
    printf("\n");


    int* new = delete(arr, 2, 1, 4);

    // int arr[] = {1,2,3,4};
    // int* new = delete(arr, 2, 1, 4);
    // printf("compiled\n");


    for (int i = 0; i < 3; i++){
        printf("%d\n", new[i]);
    }
    

}
