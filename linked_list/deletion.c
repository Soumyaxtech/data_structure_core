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

void delete_from_first(struct node **start){
    if(*start==NULL){
        printf("linked list is empty can't delete ");
    }
    else{
        struct node *ptr;
        ptr = *start;
        *start = ptr->next;
        free (ptr);
    }
    
}

void delete_from_end(struct node **start){
    struct node *ptr;
    ptr=*start;
    if(*start==NULL || ptr->next ==NULL){
        delete_from_first(start);
    }
    else{
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        free(ptr->next);
        ptr->next=NULL;
    }
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
    insert_at_begining(&start,40);
    delete_from_first(&start);
    delete_from_end(&start);

    traversal(&start);
}