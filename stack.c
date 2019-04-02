#include <stdio.h>
#include <stdbool.h>

#define maxsize   100
typedef struct{
	int data[maxsize];
	int top = 0;
}stack;

void main()
{
	stack Stack;
	
	push(Stack, 1);
	pop(Stack);

}

int push(stack *s, int Data)    //入栈
{
	if(stack_full(*s)==0){
		return -1;
	}
	s->top++;
	s->data[s->top] = Data;
	
	return 0;
}

int pop(stack *s)    //出栈
{
	if(stack_empty(*s) == 0){
		return -1;
	}
	s->top--;
	s-data[s->top] = 0;

	return 0;
}

int stack_empty(stack s)
{
	if(s.top != 0){
		return 1;
	}
	return 0;    //empty
}

int stack_full(stack s)
{
	if(s.top != maxsize-1){
		return 1;
	}
	return 0;    //full
}
