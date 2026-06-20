#include<stdio.h>
#include<string.h>
int main(){
    char a[20];
    printf("Write a word\n");
    scanf("%s",&a);
    int count=0;
    for(int i=0;i<20;i++){
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            count++;
        }
    }

    int s=strlen(a);

    printf("Total no. of consonants are: %d",s-count);


}