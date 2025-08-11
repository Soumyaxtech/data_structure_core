#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void insert_at_begining(struct node **start,int key){
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = key;
    temp->next = *start;
    *start = temp;
}


void printing_data_sec_last(struct node **start){
    struct node *ptr;
    ptr=*start;
    while(ptr!=NULL){
        if(ptr->next->next==NULL){
            printf("the data in the second last node is ");
            printf("%d ",ptr->data);
        }
        ptr=ptr->next;
    }
}

void printing_data_last(struct node **start){
    struct node *ptr;
    ptr=*start;
    while(ptr!=NULL){
        if(ptr->next==NULL){
            printf("the data in the last node is ");
            printf("%d \n",ptr->data);
        }
        ptr=ptr->next;
    }
}


int main(){
    struct node *start = NULL;
    
    insert_at_begining(&start,10);
    insert_at_begining(&start,20);
    insert_at_begining(&start,30);
    insert_at_begining(&start,40);
    insert_at_begining(&start,50);

    printing_data_last(&start);
    printing_data_sec_last(&start);
}