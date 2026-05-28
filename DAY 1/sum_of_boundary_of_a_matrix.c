#include<stdio.h>

int main(){
    int n;
    printf("enter the n*n matrix:");
    scanf("%d",&n);

    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i==0||i==n-1||j==0||j==n-1){
            sum=sum+arr[i][j]; 
           }
        }
    }

    printf("the sum of boundary element: %d",sum);

}