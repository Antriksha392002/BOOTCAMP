#include<stdio.h>

int main(){
    int nums[]={1,2,1,2,2,3,3,3};
    int numsSize=sizeof(nums)/sizeof(nums[0]);

  int freq[numsSize];

    for(int i=0;i<numsSize;i++){
        freq[i]=1;

        if(nums[i]==-1)
        continue;

        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
            freq[i]++;
            nums[j]=-1;
            }
        }
    }

    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if(freq[i]<freq[j]){
                int temp=freq[i];
                freq[i]=freq[j];
                freq[j]=temp;

                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }

    for(int i=0;i<numsSize;i++){
        if(nums[i]!=-1){
            for(int j=0;j<freq[i];j++)
            printf("%d ",nums[i]);
        }
    }
    
    
}