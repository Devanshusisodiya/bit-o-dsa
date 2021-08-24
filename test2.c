#include <stdio.h>
#include <stdlib.h>

void traverse(int* arr, int len){
    for(int i = 0; i < len; i++){
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

int* delete(int *arr, int element, int len){
    
    int index = -1;
    for(int k = 0; k < len; k++){
        if(arr[k] == element){
            index = k;
        }
    }
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
            break;
        }
    }
    return index;
}

int* bubbleSort(int* arr, int len){
    for(int i = 0; i < len-1; i++){
        for(int j = 0; j < len-1; j++){
            if(arr[j] > arr[j+1]){
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

    // TESTING SEQUENTIALLY
  
  
    int choice, element, *new, index;
    do{
        printf("1. delete\n");
        printf("2. traverse\n");
        printf("3. linear search\n");
        printf("4. binary search\n");
        printf("5. bubble sort\n");
        printf("6. quit\n");
        printf("\nYour choice?");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("enter element to delete : ");
            scanf("%d", &element);
            new = delete(arr, element, len);
            for(int i = 0; i < len-1; i++){
                printf("%d\n", new[i]);
            } 
            printf("\n");        
            break;
        case 2:
            traverse(arr, len);
            printf("\n");
            break;
        case 3:
            printf("enter element to search : ");
            scanf("%d", &element);
            index = linSearch(arr, element, len);
            if(index == -1){
                printf("element not present\n");
            }else{
                printf("found at %d", index);
            }
            printf("\n");
            break;
        case 4:
            printf("enter element to search : ");
            scanf("%d", &element);
            index = binSearch(arr, element, len);
            if(index == -1){
                printf("element not present\n");
            }else{
                printf("found at %d", index);
            }
            printf("\n");
            break;
        case 5:
            new = bubbleSort(arr, len);
            for(int i = 0; i < len; i++){
                printf("%d\n", new[i]);
            }
            printf("\n");
            break;
        case 6:
            exit(0);
        default:
            printf("\ninvalid arg\n");

        }
    }while(choice != 6);

}
