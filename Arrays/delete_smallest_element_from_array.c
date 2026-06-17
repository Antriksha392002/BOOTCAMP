#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("enter the no. of element:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int c;
    int s = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<s){
            s=arr[i];
            c=i;
        }
    }

    for(int i=c;i<n;i++){
        arr[i]=arr[i+1];
    }

    printf("\n");
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }



}