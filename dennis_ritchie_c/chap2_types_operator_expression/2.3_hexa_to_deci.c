/*   Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X)      into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

char *getstring(void);
int check_hexadecimal(char *);
int check_remains(char *);
long int convert_hex_to_dec(char *);

int main()
{
   char *ch=NULL;
   long int hex;
   ch=getstring();

   if( check_hexadecimal(ch) )
   {
       printf("supplied hexadecimal value is incorrect!!!\n");
       return 1;
   }

   hex=convert_hex_to_dec(ch);
   printf("%ld",hex);

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

int check_hexadecimal(char *str)
{
   

    if(str[0]=='0')
     {  
       if(str[1]=='x' || str[1] =='X')
        {

	       // proceed further
              return (check_remains(str));
              
       
        }

       else
        {
         return 1;
        }
     }
    
    else if ( (str[0] >='0' && str[0]<='9') || (str[0]>='a' && str[0]<= 'f') || (str[0]>='A' &&str[0]<='F') )
    {
       if( (str[1] >'0' && str[1]<='9') || (str[1]>='a' && str[1]<= 'f') || (str[1]>='A' && str[1]<='F') )
       {
          // proceed further
	    return (check_remains(str));
       }
       
       else
       {
          return 1;
       }
    }

    else
    {
       return 1;
    }



}

int check_remains(char *str)
{
  int i=2;

  for(;str[i];i++)
  {
      if( (str[i] >='0' && str[i]<='9') || (str[i]>='a' && str[i]<= 'f') || (str[i]>='A' &&str[i]<='F') )
      {
        continue;
      }

      else
      {
        return 1;
      }

  }
  if(str[2]=='\0')
  {
    if( (str[1] >='0' && str[1]<='9') || (str[1]>='a' && str[1]<= 'f') || (str[1]>='A' &&str[1]<='F') )
	    return 0;

    else
    return 1;
  }

  else
  return 0;
}

long int convert_hex_to_dec(char *str)
{
   long int num;
   long int sum=0;
   long int x=1,y=2;

   int index=strlen(str)-1;

   

   while(index != -1)
   {
       if(str[index]=='x' || str[index]=='X')
       {
          break;
       }

       else if(str[index]=='A'|| str[index]=='a')
       num=10;


       else if(str[index]=='B'|| str[index]=='b')
       num=11;


       else if(str[index]=='C'|| str[index]=='c')
       num=12;


       else if(str[index]=='D'|| str[index]=='d')
       num=13;


       else if(str[index]=='E'|| str[index]=='e')
       num=14;


       else if(str[index]=='F'|| str[index]=='f')
       num=15;
   
       else
        num=str[index]-48;

	sum= sum+num*pow(x,y);
	x=2; y= y*2;
	index--;
   }

   return sum;

   
}
