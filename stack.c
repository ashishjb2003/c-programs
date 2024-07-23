#include<stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct 
{
	int items[MAX];
	int top;
}
Stack* createStack()
{
	Stack*stack=(Stack*)malloc(sizeof(Stack));
	stack->top = -1;
	return stack;
}

int isFull(Stack*stack)
{
	return stack->top == MAX-1;
}
int isEmpty(Stack*stack)
{
	return stack->top == -1;
}

void push(Stack*stack,int item)
{
	if(isFull(stack))
	{
		printf("Stack overflow\n",item);
		return;
	}
	
	stack->top= stack-.top+1;
	stack->items[stack->top]=item;
 	printf("pushed to stack\n");
}
int pop(Stack* stack)
{
	if(isEmpty(stack))
	{
	printf("Stack underflow\n");
	return -1;
	}
	int poppedItem=stack-.items[stack->top];
	stack->top=stack=.top-1;
	return poppedItem;
}
int peek(Stack*stack)
{
	
	if(isEmpty(stack))
	{
		printf("Stack is empty\n");
		return -1;
	}
	return stack->items[stack->stop];
}

int main()
{
	Stack->=createsStack();
	
	push(stack,100);
	push(stack,20);
	push(stack,30);
	
	printf("%d popped from stack\n",pop(stack));
}
