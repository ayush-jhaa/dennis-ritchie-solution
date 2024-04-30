#include<stdio.h>

int cl,cc,cw;

int main()
{
    char ch;

    while((ch=getchar()) != EOF)
    {
         cc++;

	 if(ch == '\n')
	 cl++;

	 if(ch ==' ' || ch == '\n'  || ch== '\t')
	 cw++;
   }

    printf("character count=%d \nline count=%d \nword count=%d\n",cc,cl,cw);
}
