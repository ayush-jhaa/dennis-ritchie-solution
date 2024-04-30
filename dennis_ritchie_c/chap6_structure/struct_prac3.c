#include"headers.h"

struct stu
{
   int i;
   char ch;
};

int main()
{
	struct stu v;

	struct stu *p=NULL;
	p=&v;

/*	printf("take input from user..\n");
	scanf("%d %c",&p->i,&p->ch);
	printf("%d %c",p->i,p->ch);
*/
	printf("second way of taking input from user..\n");
	scanf("%d %c",&(*p).i,&(*p).ch);
	printf("%d %c",(*p).i,(*p).ch);


    
}
