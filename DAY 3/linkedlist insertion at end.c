#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* create(struct node* head){
    struct node *newnode,*temp;
    
    int n;
    scanf("%d",&n);
    
    while(n!=0){
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        
        if(head==NULL){
            head=temp=newnode;
        }
        
        else{
            temp->next=newnode;
            temp=newnode;
        }
        
        n--;
    }
    
    return head;
}

void display(struct node *head){
    struct node *temp=head;
    
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
}
int main()
{
    struct node *head=NULL;
    head=create(head);
    display(head);
    
}