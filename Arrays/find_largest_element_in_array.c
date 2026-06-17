#include<stdio.h>

int main(){
    int n;
    printf("enter the element:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int l=0;

    for(int i=0;i<n;i++){
        if(l<arr[i]){
            l=arr[i];
        }
    }
printf("\n");

    printf("The largest element among them is : %d",l);
    
}