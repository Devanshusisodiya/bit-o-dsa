#include<stdio.h>
#include<>

void sum(int ma1[10][10],int ma2[10][10],int m,int n,int p,int q)
{
    int s[10][10],i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            s[i][j]=0;
            for(k=0;k<n;k++)
            {
            s[i][j]=ma1[i][j]+ma2[i][j];
            }
        }
    }
    printf("the added matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d",s[i][j]);
        }
        printf("\n");
}

// void diff(int mat1[10][10],int mat2[10][10],int m,int n,int p,int q){
//     int d[10][10],i,j,k;
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<p;j++)
//         {
//             d[i][j]=0;
//             for(k=0;k<n;k++)
//             {
//             d[i][j]=mat2[i][j]-mat1[i][j];
//             }
//         }
//     }
//     printf("the subtracted matrix\n");
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<p;j++)
//         {
//             printf("%d",d[i][j]);
//         }
//         printf("\n");
// }

// void multiply(int m1[10][10],int m2[10][10],int m,int n,int p,int q)
// {
//     int mul[10][10],i,j,k;
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<p;j++)
//         {
//             mul[i][j]=0;
//             for(k=0;k<n;k++)
//             {
//                 mul[i][j]=mul[i][j] + m1[i][k]*m2[k][j];   
//             }
//         }
//     }

//     printf("the multiplied matrix\n");
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<p;j++)
//         {
//             printf("%d",mul[i][j]);
//         }
//         printf("\n");

//     }
// }

void main(){ 
    int ch,n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    printf("\n\nChoose from the following :\n1) sum of 2 array\n2) difference of 2 array\n3) multiplication of 2 array\n4) Exit\n\t");
    scanf("%d",&ch);
    switch(ch){
        case 1 :
                int m,n,p,q,i,j;
                int ma1[10][10],ma2[10][10];
                printf("enter the number of rows and columns for m1\n");
                scanf("%d %d",&m,&n);
                printf("fill the m1");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        scanf("%d",&m1[i][j]);
                    }
                }
                printf("enter the number of rows and columns for m2\n");
                scanf("%d %d",&p,&q);
                printf("fill the m2");
                for(i=0;i<p;i++)
                {
                    for(j=0;j<q;j++)
                    {
                        scanf("%d",&m2[i][j]);
                    }
                }
                sum(ma1,ma2,m,n,p,q);
                break;
                case 2 :
                int m,n,p,q,i,j;
                int ma1[10][10],ma2[10][10];
                printf("enter the number of rows and columns for m1\n");
                scanf("%d %d",&m,&n);
                printf("fill the m1");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        scanf("%d",&m1[i][j]);
                    }
                }
                printf("enter the number of rows and columns for m2\n");
                scanf("%d %d",&p,&q);
                printf("fill the m2");
                for(i=0;i<p;i++)
                {
                    for(j=0;j<q;j++)
                    {
                        scanf("%d",&m2[i][j]);
                    }
                }
                diff(int ma1,int ma2,m,n,p,q);
                break;
                case 3 :
                int m,n,p,q,i,j;
                int m1[10][10],m2[10][10];
                printf("enter the number of rows and columns for m1\n");
                scanf("%d %d",&m,&n);
                printf("fill the m1");
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        scanf("%d",&m1[i][j]);
                    }
                }
                printf("enter the number of rows and columns for m2\n");
                scanf("%d %d",&p,&q);
                printf("fill the m2");
                for(i=0;i<p;i++)
                {
                    for(j=0;j<q;j++)
                    {
                        scanf("%d",&m2[i][j]);
                    }
                }
                if(n==p)
                {
                multiply(m1,m2,m,n,p,q);
                }
                else
                {
                    printf("number of col of m1 should be equal to number of rows of m2");
                }
                break;
                default : printf("\nINVALID Choice\n");
    }
    
}