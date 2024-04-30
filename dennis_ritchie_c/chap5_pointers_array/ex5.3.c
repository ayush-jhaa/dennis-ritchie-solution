/*    Exercise 5-3. Write a pointer version of the function strcat that we showed in Chapter 2: strcat(s,t) copies the 
 *    string t to the end of s.
 *
 *
 *    Author:- Ayush Jha
 */

#include<stdio.h>    //includes header file here
#include<stdlib.h>  

char * getstring(void); // getstring prototype for taking input from user dynamically
char *mystrcat(char *dest, char *src); // string concatenate prototype

int main()                               
{
	char *dest=getstring();
	char *src=getstring();

	char *newdest=mystrcat(dest,src);   // string concatenate function call

	printf("%s %s ",src, newdest);
  
}

char *mystrcat(char *dest, char *src)     // string concatenate function defination
{
    int i=0,j=0;

    for(;dest[i];i++);

    while(src[j])			
    {
      dest[i+j]=src[j];
          j++;
    }

    return dest;
}

char * getstring(void)                    // getstring function defination for taking input from user
{
   char *temp=NULL;
   int i=0;
   do
   {
      temp=realloc(temp,(i+1)*sizeof(char));
      temp[i]=getchar();
   }while(temp[i++] !='\n');

   temp[--i]='\0';

   return temp;
}

// char *strcat(char *dest, const char *src);
