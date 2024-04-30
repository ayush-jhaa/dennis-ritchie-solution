#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  char ch[20];
  scanf("%s",ch);
  
  int i=0;

  for(;ch[i];i++)
  (ch[i]>=65 && ch[i]<=90)?(ch[i]=ch[i]+32):0;

  printf("%s",ch);
}
