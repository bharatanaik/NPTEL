#include<stdio.h>
#include<stdlib.h>


struct node{
    int item;
    struct node* link;
};

typedef struct node* NODE;

NODE push(NODE first, int item){
    NODE temp;
    temp = (NODE)malloc(sizeof(struct node));
    temp->item = item;
    temp->link = first;
    return temp;    
}

void display(NODE first){
    NODE cur;
    cur = first;
    printf("\nLinked list: ");
    while(cur!=NULL){
        printf("%d", cur->item);
        cur = cur->link;
    }
    printf("\n");
}

void reverse_display(NODE first){
    if(first == NULL)
        return;
    if(first->link != NULL);
        reverse_display(first->link);
    printf("%d", first->item);
}

int main(){
    int n, item, i;
    NODE first, cur;
    printf("running....");
    first = (NODE)malloc(sizeof(struct node));
	first = NULL;
	
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    printf("\nEnter elements:");
    for(i=0; i<n; i++){
        scanf("%d", &item);
        first = push(first, item);
    }
    display(first);
    printf("\n#### Reverse the order ####\n");
    reverse_display(first);
    return 0;
}