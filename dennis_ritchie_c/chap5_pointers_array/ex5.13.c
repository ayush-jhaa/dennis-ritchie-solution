/*	Exercise 5-13. Write the program tail, which prints the last n lines of its input. By default, n is set to 10,
 *	let us say, but it can be changed by an optional argument so that tail -n prints the last n lines. The program
 *	should behave rationally no matter how unreasonable the input or the value of n. Write the program so it makes
 *	 the best use of available storage; lines should be stored as in the sorting program of Section 5.6, not in a 
 *	 two-dimensional array of fixed size.
 */

#include<stdio.h>
#include<stdlib.h>

char *getstring(void);
void mytail(char *,int ,int);
void getans(char *);
void getremains(char*,int,int);

int main(int argc, char *argv[])
{
   int n;
   printf("enter the input from user\n");
   char *str=getstring();

   if(argc !=2)
   {
     printf("usage :- ./a.out input\n");
     return 1;
   }
   
   char *getline=str;
   int line=0;

   while(*getline != '\0')
   {
      while(*getline != '\n')
      {
        getline++;      
      }

      getline++;
      line++;
   }

   int input=atoi(argv[1]);

   printf("line:%d",line);

   printf("\n\n");
   
   mytail(str,line,input);

   
   
   // printf("%s",str);
		   
		   
}

char *getstring(void)
{
     char *ch=NULL;
     int i=0;

     do
     {
       ch= realloc(ch,(i+1)*sizeof(ch));
       ch[i]=getchar();  
     }while(ch[i++]!= EOF);

     ch[--i]='\0';

     return ch;
}

void mytail(char *str, int line , int input )
{
   int remains;

   if(input>=line)
   {
     
      getans(str);    // prints whole
   }
   else if(input<line)
   {
      remains=line-input;
     
      getremains(str,line,remains); // print only after that line
   }

 

}

void getans(char *str)
{
  int newline=0;

  while(*str !='\0')
  {
     while(*str != '\n')
     {
	
        printf("%c",*str);
	str++;
     }
     printf("%c",*str);

     str++;
     newline++;
  }
}

void getremains(char *str, int line, int remains)
{
  int newline=0;

  while(*str !='\0')
  {
     while(*str!='\n')
     {
       if (newline>=remains)
	{
	   printf("%c",*str);
	}
        str++;
     }

     if(newline>=remains)
     printf("%c",*str);
     
     str++;
     newline++;
  }


}

