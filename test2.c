#include <stdio.h>
#include <stdlib.h>

void traverse(int* arr, int len){
    for(int i = 0; i < len; i++){
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

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

int linSearch(int* arr, int element, int len){
    int index = -1;
    for(int i = 0; i < len; i++){
        if(arr[i] == element){
            index = i;
        }
    }
    return index;
}

int binSearch(int* arr, int element, int len){
    int index = -1;
    int low = 0;
    int high = len;
    while(low <= high){
        int mid = (low + high)/2;
        if(element < arr[mid]){
            mid = high - 1;
        }if(element > arr[mid]){
            mid = low + 1;
        }if(element == arr[mid]){
            index = mid;
        }
    }
    return index;
}

int* bubbleSort(int* arr, int len){
    for(int i = 0; i < len-1; i++){
        for(int j = 0; j < len-1; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
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
    printf("\n\n");

    // IMPLEMENTING MENU DRIVEN, TESTING SEQUENTIALLY

    // traverse(arr, len);
    // delete(arr, 2, 1, len);

}
