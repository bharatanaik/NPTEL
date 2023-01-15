#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 10

int A[MAXSIZE]; 
int t1 = -1; 
int t2 = MAXSIZE; 


void push1(){
    int item;
    if(t1 == t2-1){
        printf("\nSTACK OVERFLOW");
        return;
    }
    printf("\nEnter item: ");
    scanf("%d", &item);
    t1++;
    A[t1] = item;
}


void push2(){
    int item;
    if(t1 == t2-1){
        printf("\nSTACK OVERFLOW");
        return;
    }
    printf("\nEnter item: ");
    scanf("%d", &item);
    t2--;
    A[t2] = item;
}

void display(){
	int i;
	printf("\nA stack: ");
	for(i=0; i<MAXSIZE; i++){
	
		printf("%d ", A[i]);
	}
}

int main(){
    int op;
    while(1){
        printf("\noption: ");
        scanf("%d", &op);
        switch(op){
            case 1:
                push1();
                break;
            case 2:
                push2();
                
                break;
            default:
                exit(0);
        }
        display();
    }
}
