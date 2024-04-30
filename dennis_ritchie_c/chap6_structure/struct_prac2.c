#include"headers.h"

#define MAIN main()
struct st
{
int x;
char ch;
float f;
};

int MAIN
{
  struct st v;
  printf("%ld",sizeof(v));
}
