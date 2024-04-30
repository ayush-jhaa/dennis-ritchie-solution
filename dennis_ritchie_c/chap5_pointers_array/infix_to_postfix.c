#include<stdio.h>
#include<string.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char);
char pop();

int isOperator(char);
int Priority(char);

int main()
 {
    char exp[MAX], postfix[MAX];
    printf("Enter the infix expression: ");
    scanf("%s", exp);

    int i = 0, j = 0;

    while (exp[i])  //algo 1
	{

        if (exp[i] == '(')      // algo 2
        {

                push(exp[i]);
        }

        else if (isOperator(exp[i]))
        {
            if (top == -1 || stack[top] == '(' || (Priority(stack[top]) < Priority(exp[i]) ))   //algo 3
            {
               push(exp[i]);

            }

            else           																	
           {
                while (top != -1 && stack[top] != '(' && Priority(stack[top]) >= Priority(exp[i]))   //algo 4
			  {
                postfix[j++] = pop();
              }
                 push(exp[i]);
           }

        }

        else if (exp[i]==')')   //algo 5
        {
            while ( stack[top] != '(')
            {
                postfix[j++] = pop();
            }
            pop();

        }

        else                      //algo 6
        {

            postfix[j++] = exp[i];
        }
        i++;
    }

    while (top != -1)       // algo 7
	{
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("Postfix expression: %s\n", postfix);

    return 0;
}

void push(char ch) {
    if (top == MAX - 1) 
	{
        printf("Stack is Full\n");
    } 
	else
	{
        stack[++top] = ch;
    }
}

char pop() {
    if (top == -1) 
	{
        printf("Stack is Empty\n");
        return 0;
    } 
	else
    {
        return stack[top--];
    }
}

int isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int Priority(char ch) {
    if (ch == '+' || ch == '-')
	 {
        return 1;
    } 
	else if (ch == '*' || ch == '/') 
	{
        return 2;
    }
    return 0;
}


