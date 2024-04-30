#include"header.h"

int main(int argc, char *argv[])
{
    FILE *fp;
    char str[100];
    int c;

     if(argc !=2)
    {
       printf("argument is not matching properly\n");
       return 1;
    }

    fp=fopen(argv[1],"r");

    if(fp==NULL)
    {
      printf("file is not correct\n");
      return 1;
    }

    while((c=fgetc(fp)) >= 1)
   {
//  memset(str,0,100);
    printf("%c",c);

   }

    fclose(fp);
}
