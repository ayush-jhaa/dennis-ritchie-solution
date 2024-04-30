#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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

int main()
{
    char *memory=getstring();

    while(memory=strchr(memory,'l'))
    {
      printf("%c",*memory);
      memory++;
    }
}
