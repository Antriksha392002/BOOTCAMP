#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

int creatnode(struct node* head){
    struct node *newnode,*temp;
    int count=0;
   
    while(1){
    
 newnode=(struct node*)malloc(sizeof(struct node));

    scanf("%d",&newnode->data);
    
    if(newnode->data==-1){
        return count;
    }
    count++;
    newnode->next=NULL;
    
        
        if(head==NULL){
            head=temp=newnode;
        }

        else{
            temp->next=newnode;
            temp=newnode; 
        }
        
    }

    return count;
}

void main(){
    struct node* head=NULL;
    int count=creatnode(head);
    printf("Total no. of element is : %d",count);
}