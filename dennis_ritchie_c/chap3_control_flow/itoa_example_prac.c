//i_to_a conversion

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void strrev(char *str)
{
   int i=0;
   int index=strlen(str)-1;

   while(i<index)
   { 
      str[i] = str[i]^str[index];

      str[index] = str[i]^str[index];

      str[i] = str[i]^str[index];
      
      i++; index--;
      
   }


}
void itoa(char *s,int n)
{
    int i=0;
    int sign=n;

    if(n<0)
    {
     n=-n;
    }

    do
    {
        s[i++]=(n%10)+'0';

    }while( (n /=10)>0 );

    if(sign <0)
    {
      s[i++]= '-';
    }
    s[i]='\0';

    strrev(s);
}

int main()
{
    int n;
    char s[20];
    printf("enter your integer number:\n");
    scanf("%d",&n);

    itoa(s,n);

    printf("%s",s);
}
