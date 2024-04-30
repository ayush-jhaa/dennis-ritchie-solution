/*  Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted 
 *  (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int x; // integer to write
  printf("enter the integer..\n");
  scanf("%d",&x);

  int p; // starting position
  printf("enter the starting pos.\n");
  scanf("%d",&p);

  int n; // enter number of bits
  printf("enter number of bits from starting pos..\n");
  scanf("%d",&n);

  while(n>=p)
  {
     x=x^(1<<n);
     n--;
     
  }

  printf("%d",x);
 }
