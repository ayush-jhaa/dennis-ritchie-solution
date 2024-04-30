#include<stdio.h>

int main()
{
   char ch;
   int lines=0;

   while( (ch=getchar()) != EOF)
   {
       if(ch == '\n')
	++lines;

   }

   if(lines==0)
    printf("1");

   else
   printf("%d",lines);
   
}

