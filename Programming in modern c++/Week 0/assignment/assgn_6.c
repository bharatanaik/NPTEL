void fun(Queue *que){
    Stack Stk;

    while(!isEmpty(que)){
        push(&Stk, deQueue(que));
    }

    while(!isEmpty(&Stk)){
        enQueue(que, pop(&Stk));
    }
}