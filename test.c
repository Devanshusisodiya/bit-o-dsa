#include <stdio.h>
#include <stdlib.h>

#define S 0
#define M 2
#define N 2
#define P 2
#define Q 2

void main(){

    // int m, n, p, q;
    // scanf("%d %d", &m, &n);
    // int arr1[m][n];

    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         scanf("%d", &arr1[i][j]);
    //     }   
    //     printf("new row\n");
    // }

    // printf("\n");

    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         printf("%d ", arr1[i][j]);
    //     }
    //     printf("\n");   
    // }

    // printf("new mat\n");
    // scanf("%d %d", &p, &q);
    // int arr2[p][q];

    // for(int i = 0; i < p; i++){
    //     for(int j = 0; j < q; j++){
    //         scanf("%d", &arr2[i][j]);
    //     }   
    //     printf("new row\n");
    // }

    // printf("\n");

    // for(int i = 0; i < p; i++){
    //     for(int j = 0; j < q; j++){
    //         printf("%d ", arr2[i][j]);
    //     }
    //     printf("\n");   
    // }

    int arr1[2][2] = {
        {1,2},
        {3,4}
    };

    int arr2[2][2] = {
        {1,2},
        {3,4}
    };

    int ctr_r = 0;
    int ctr_c = 0;

    if(N == P){
        int arr3[M][Q];
        for(int i = 0; i <= M; i++){
            // int temp = 0;
            for(int j = 0; j < Q; j++){
                printf("%d, %d", arr1[i][j], arr2[j][i]);
            }
            printf("\n");
        }

        for(int i = 0; i < M; i++){
            for(int j = 0; j < Q; j++){
                printf("%d ", arr3[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("multiplication not possible");
    }

}