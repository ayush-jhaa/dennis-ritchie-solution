/*   Exercise 4-13. Write a recursive version of the function reverse(s), which reverses the string s in place.*/

#include<stdio.h>
#include<stdlib.h>

void reverse(char *);

int main()
{
     char *ch=NULL;
    int i=0;
    do
    {
      ch=realloc(ch,(i+1)*sizeof(char));
      ch[i]=getchar();

    }while(ch[i++] != '\n');

    ch[--i]='\0';
    reverse(ch);
}

void reverse(char *str)
{
   if(*str=='\0')
    return;

   reverse(str+1);
   printf("%c",*str);
}

