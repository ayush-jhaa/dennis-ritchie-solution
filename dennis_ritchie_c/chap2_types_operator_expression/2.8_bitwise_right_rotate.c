
/* Exercise 2-8. Write a function rightrot(x,n) that returns the value of the integer x rotated to the right by n
   positions.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   int x;

   printf("enter the integer value....\n");
   scanf("%d",&x);

   int n;
   printf("enter the n position...\n");
   scanf("%d",&n);

   x=x>>n;

   printf("the updated value is %d\n",x);
}
