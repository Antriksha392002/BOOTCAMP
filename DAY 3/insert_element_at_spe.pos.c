#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* creatnode(struct node* head){
    struct node *newnode,*temp;
    int n;
     
    printf("how many element do you want to enter : ");
    scanf("%d",&n);


    for(int i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);

        if(head==0){
            head=temp=newnode;
        }

        else{
            temp->next=newnode;
            temp=newnode;
        }

    }
}

void replace(int pos,int val, struct node* head){

    struct node* temp=head;
    for(int i=0;i<pos;i++){
        temp=temp->next;
    }
    temp->data=val;
}

void display(struct node* head){
        struct node *temp=head;

        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }


}


int main(){
    struct node *head;
    int n,val;
    creatnode(head);

    printf("enter the position and the value");
    scanf("%d %d",&n,&val);
    replace(n,val,head);
    display(head);

}
