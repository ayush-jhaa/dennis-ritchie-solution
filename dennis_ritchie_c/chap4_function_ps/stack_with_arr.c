#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX];
int top=-1;

void push(int);
int pop(void);
int peek(void);

int main()
{
	int data,choice;

	while(1)
	{
		printf("1.push 2.pop 3.peek 4.exit..\n");
		scanf("%d",&choice);

		switch(choice)
		{

			case 1: printf("enter data..\n");
				scanf("%d",&data);
				push(data);
				break;
			case 2: if(top==-1)
				{
					printf("stack is empty..\n");
				}
				else
				{
					printf("data popped is %d\n",pop());
				}
				break;
			case 3: if(top==-1)
					printf("Stack si empty\n");
				else
				{
					printf("top of the stack pointing to %d\n",peek());
				}
				break;
			case 4: exit(0);

		}
	}

}

void push(int data)
{
	if(top==MAX-1)
	{
		printf("stack is full..\n");

	}
	else
	{
		stack[++top]=data;
	}
}

int pop(void)
{
	return stack[top--];

}

int peek(void)
{
	return stack[top];
}

