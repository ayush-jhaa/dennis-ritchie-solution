/* This program is to compare two string s1 and s2 and remove all the character in string s1 that matches any character in
   the string s2 
   
Author:-  Ayush
Created:- 04/08/2024

*/


// required header files
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *getstring(void);           // function prototype of getstring
void squeeze(char *, char *);    // function prototype of squeeze

/* this is main file which accept  two strings by using getstring function and then it compare both string using 
   squeeze function call and delete s1 character that matches any character with s2 string and print the output  
*/

int main()                      
{
   char *s1=NULL; // s1 string
   char *s2=NULL; // s2 string

   s1=getstring(); // dma for string s1
   s2=getstring(); // dma for string s2

   squeeze(s1,s2); 

   printf("%s\n",s1); // printing s1 string

   free(s1);  // freeing dynamically allocated memory
   free(s2);
}


/* function getstring() dynamically allocates memory for s1 and s2 and assign string inside it
 * */ 

char *getstring(void)
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
} /* end of getstring function */




/* squeeze() function accepts two argument s1 and s2 then compare s1 string with s2 and if character of
 * s1 matches with any character s2 then remove that character in s1 string
 * */

void squeeze(char *s1, char *s2)
{
     char *p=NULL;
     int i=0;

     while(s2[i] != '\0')
     {
     	while((p=strchr(s1,s2[i]))!= NULL)
     	{
          memmove(p,p+1,strlen(p+1)+1);
     	}
     	  i++;

     }

     free(p);

 }
/* end of squeeze function */
