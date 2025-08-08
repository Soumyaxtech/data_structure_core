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

void insert_at_end(struct node **start,int key){

    struct node*temp;
    temp = malloc(sizeof(struct node));
    temp->data = key;
    temp->next=NULL;

    if(*start==NULL){
        *start = temp;
    }
    else{
        struct node *ptr;
        ptr = *start;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void insert_at_place(struct node **start,int key,int pos){
    struct node *temp;
    temp=malloc(sizeof(struct node));
    temp->data=key;
    if(*start==NULL){
        insert_at_begining(&*start,key);
    }
    else{
        struct node *ptr;
        int count =1;
        ptr =*start;
        while(count<pos-1){
            ptr = ptr->next;
            count++;
        }
        temp->next = ptr->next;
        ptr->next = temp;
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
    insert_at_end(&start,40);
    insert_at_place(&start,50,3);

    traversal(&start);
}