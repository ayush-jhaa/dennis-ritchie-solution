/*    Exercise 3-6. Write a version of itoa that accepts three arguments instead of two. The third argument is a minimum
 *    field width; the converted number must be padded with blanks on the left if necessary to make it wide enough.
 *
 */

#include<stdio.h>
#include<string.h>

int check(int i);

void strrev(char *str)
{
   int i=0;
   int index=strlen(str)-1;

   while(i<index)
   {
      str[i] = str[i]^str[index];

      str[index] = str[i]^str[index];

      str[i] = str[i]^str[index];

      i++; index--;

   }


}
void itoa(int n, char s[],int f)
{
	int i, sign;

	int temp=0;
	if ((sign = n) < 0) 
	{
		n = -n;
	       temp++;	
	}
	i = 0;
	do { /* generate digits in reverse order */
		s[i++] = n % 10 + '0'; 
		temp++;
	} while ((n /= 10) > 0); /* delete it */
	if (sign < 0)
		s[i++] = '-';


	while(temp<f)
	{
	   s[i++]=' ';
	   temp++;
	}
	s[i] = '\0';
	strrev(s);

	printf("%s",s);
}
int main()
{
	int i;
	int field_width;
	char s[20];
	printf("enter integer number :");
	scanf("%d",&i);

	printf("enter field width \n");
	scanf("%d",&field_width);

	itoa(i,s,field_width);

}
