#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX 50
int stack[MAX];
int top=-1;

int pop(void);
void push(int);
int peek(void);

int main()
{
	char input[MAX];
	int i = 0;
	char c;

	printf("Enter the expression in RPN format: ");
	fgets(input, MAX, stdin);

	while (input[i] != '\0') {
		c = input[i];

		if (isdigit(c)) {
			int num = 0;
			while (isdigit(c)) {
				num = num * 10 + (c - '0');
				i++;
				c = input[i];
			}
			push(num);
		} else if (c == '+' || c == '-' || c == '*' || c == '/' || c=='%'){
			int b = pop();
			int a = pop();
			switch (c) {
				case '+':
					push(a + b);
					break;
				case '-':
					push(a - b);
					break;
				case '*':
					push(a * b);
					break;
				case '/':
					push(a / b);
					break;
				case '%':
					push(a % b);
					break; 
			}
			i++;
		} else if (c == ' ' || c == '\t' || c == '\n') {
			i++;
		}
	}

	int ans = peek();
	pop();
	printf("Result: %d\n", ans);

	return 0;
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
	if(top>-1)
	{
		return stack[top--];
	}
	else
	{
		printf("stack is empty no data to pop...\n");
		return -1; // Indicating error
	}
}

int peek(void)
{
	return stack[top];
}

