/*Exercise 5-5. Write versions of the library functions strncpy, strncat, and strncmp, which operate on at most the first n 
 * characters of their argument strings. For example, strncpy(s,t,n) copies at most n characters of t to s.
 */

#include<stdio.h>

char *mystrcpy(char *desti,const char* src,size_t n)
{
   int i=0;

   while(i<n && src[i])
   {
       desti[i]=src[i];
       i++;
   }

   if(i<n)
 desti[i]='\0';
   return desti;
}

int main()
{
     char src[20];
     puts("enter the source:");
     gets(src);

     char desti[40];
     puts("enter the destination:");
     gets(desti);


     printf("desti before strcpy:%s\n",desti);

     puts("enter length");
     int length;
     scanf("%d",&length);

     mystrcpy(desti,src,length);

     printf("after strcpy:%s",desti);
}
