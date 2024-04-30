// replacing tab with n which stand for number of spaces in string

#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[50];
    int n;
    printf("enter the n:\n");
    scanf("%d",&n);

    printf("enter string\n");
    __fpurge(stdin);
    fgets(str,50,stdin);

    char *p=str;

    while(p=strchr(p,'\t'))
    {
	
        memmove(p+n,p+1,strlen(p+1)+1);
	for(int i=0;i<n;i++)
	{
	   p[i]=' ';
	}
	
       
    }
    printf("%s",str);
}
