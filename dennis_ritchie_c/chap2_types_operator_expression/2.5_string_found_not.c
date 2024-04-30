#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *getstring(void);
int any(char* ,char*);

int main()
{
   char *s1=NULL;
   char *s2=NULL;

   printf("enter the first string\n");
   s1=getstring();

   printf("enter the second string\n");
   s2=getstring();

  

   if(any(s1,s2)== -1)
   printf("%d",any(s1,s2));

   else
   printf("%d",any(s1,s2));

   free(s1);
   free(s2);
   s1=NULL;
   s2=NULL;

  
}

char * getstring(void)
{
    char *ch=NULL;
    int i=0;
    do
    {
      ch=realloc(ch,(i+1)*sizeof(char));
      ch[i]=getchar();

    }while(ch[i++] != '\n');

    ch[--i]='\0';

    return ch;
}

int any(char *s1, char *s2)
{
   int i=0;
   int ch=0;

   for(;s1[i];i++)
   {
      while(strchr(s2,s1[i]))
      {
          ch=i;
          break;
      }

      if(ch)
      break;

   }
   if(ch==0)
   return -1;

   else
   return ch;

}
