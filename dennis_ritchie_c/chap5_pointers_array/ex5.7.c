/*   Exercise 5-7. Rewrite readlines to store lines in an array supplied by main, rather than calling alloc to maintain storage.
 *   How much faster is the program?
 *
 */

#include<stdio.h>
#define MAX 1000
void readlines(char *);
int main()
{
    char str[MAX];
    
    readlines(str);
    
    printf("%s",str);
}
void readlines(char *s)
{
   char ch;
   int i=0;

   while((ch=getchar()) != EOF)
   {
      s[i]=ch;

      if(i>MAX)
	break;

      i++;
   }

   s[i]='\0';

}
