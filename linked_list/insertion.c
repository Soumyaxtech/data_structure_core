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

void traversal(struct node **start){
    struct node *ptr;
    ptr=*start;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct node *start = NULL;
    
    insert_at_begining(&start,10);
    insert_at_begining(&start,20);
    insert_at_begining(&start,30);

    traversal(&start);
}