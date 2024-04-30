#include"headers.h"

struct stu
{
   int i;
   char s[20];
   float f;
}s1,s2;

int main()
{
  s1.i=14;
  //strcpy(s1.s,"hello");
  s1.s="hello";
  s1.f=15;

  printf("%d %s %f",s1.i,s1.s,s1.f);
}
