#include<stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct{
    int items[MAX];
    int top;
} Stack;

Stack* createStack(){
    Stack*stack=(Stack*)malloc(sizeof(Stack));
    stack->top=-1;
    return stack;
}

int isFull(Stack*stack){
    return stack->top==MAX-1;
}

int isEmpty(Stack*stack){
    return stack->top==-1;
}

void push(Stack* stack,int item){
    if (isFull(stack)){
        printf("stack overflo\n");
        return;
    }
    stack->top=stack->top+1;
    stack->items[stack->top]=item;
    printf("%d pushed to stack\n",item);
}
int pop(Stack*stack){
    if (isEmpty(stack)){
        printf("stack underflow\n");
        return -1;
    }
    int poppedItem=stack->items[stack->top];
    stack->top=stack->top-1;
    return poppedItem;
}
int peek(Stack*stack){
    if(isEmpty(stack)){
        printf("stack is empty\n");
        return -1;
    }
    return stack->items[stack->top];

}

int main(){
    Stack* stack=createStack();

    push(stack,10);
    push(stack,20);
    push(stack,30);

    printf("%d popped from stack\n",pop(stack));
}
