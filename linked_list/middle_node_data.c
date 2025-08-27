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



void middle_node_data(struct node **start){
    struct node *ptr;
    ptr=*start;
    int count=1;
    while(ptr->next!=NULL){
        ptr=ptr->next;
        count ++;
    }
    ptr=*start;
    if(count%2==0){
        for(int i=1;i<count/2;i++){
            ptr=ptr->next;
        }
        printf("the data in the middle node is ");
            printf("%d \n",ptr->data);
    }
    else{
        for(int i=1;i<(count/2)+1;i++){
            ptr=ptr->next;
        }
        printf("the data in the middle node is ");
            printf("%d \n",ptr->data);
    }
}

void middle_node_data_two_pointer(struct node **start){

    struct node *fast;
    struct node *slow;

    fast = *start;
    slow = *start;

    while(fast !=NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }

    printf("the data in the middle node using two pointer is ");
            printf("%d \n",slow->data);

}


int main(){
    struct node *start = NULL;
    
    insert_at_begining(&start,10);
    insert_at_begining(&start,20);
    insert_at_begining(&start,30);
    insert_at_begining(&start,40);
    insert_at_begining(&start,50);
    insert_at_begining(&start,60);

    middle_node_data(&start);
    middle_node_data_two_pointer(&start);

}