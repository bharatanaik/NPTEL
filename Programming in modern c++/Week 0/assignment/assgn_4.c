#include<stdio.h>
#include<stdlib.h>

struct node{
    char data;
    struct node* next;
};

struct node* push(struct node* first, char letter){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = letter;
    temp->next = first;
    return temp;    
}

//Assignment code snippet starts from here
void fun(struct node* start){
    if(start == NULL)
        return;
    printf("%c", start->data);
    if(start->next != NULL);
        fun(start->next->next);
    printf("%c", start->data);
}
//Code ends here


int main(){
    struct node* first;
    first = (struct node*)malloc(sizeof(struct node));
    first = NULL;
    first = push(first, 'P');
    first = push(first, 'G');
    first = push(first, 'K');
    first = push(first, 'T');
    first = push(first, 'I');
    first = push(first, 'I');   
    fun(first);
    return 0;
}