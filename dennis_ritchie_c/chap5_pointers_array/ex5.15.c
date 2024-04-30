/*   Exercise 5-15. Add the option -f to fold upper and lower case together, so that case distinctions are not made during
 *   sorting; for example, a and A compare equal.
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void input(int *,int);
void decreasing_order_sort(int *,int);
void increasing_order_sort(int *,int);
void output(int *, int);
//void error_check(char **,int *,int);

int main(int argc, char *argv[])
{
	if (argc !=3)
	{
		printf("entered input is incorrect..\n");
		return 1;
	}

	int n;
	printf("enter value of n..\n");
	scanf("%d",&n);

	int arr[n];

	input(arr,n);

	//	error_check(argv,arr,n);

	// error checking stars-------------------------------------------------------------------------------------

	if((strcmp(argv[1],"-f"))==0  )
	{

		if(  ( argv[2][1]=='n') || ( argv[2][1]=='N'  ) )
		{
			increasing_order_sort(arr,n);
		}
		else if (  ( argv[2][1]=='r') || ( argv[2][1]=='R'  ) )
		{
			decreasing_order_sort(arr,n);
		}
		else
		{
			printf("entered input is incorrect..we are here\n");
			return 1;
		}

	}

	else
	{
		printf("entered input is incorrect..\n");
		return 1;
	}

	//------------------------------ERROR CHECKING ENDS---------------------------------------------------------
	output(arr,n);

	return 0;

}

void input(int *arr,int n)
{
	printf("enter inputs..\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");

}
void increasing_order_sort(int *arr,int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}

	}
}

void decreasing_order_sort(int *arr,int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}

	}
}

void output(int *arr, int n)
{
	printf("output....\n");

	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

/*
   void error_check(char **argv,int *arr,int n)
   {
   if((strcmp(argv[1],"-f"))==0  )
   {

   if( !(  (strcmp(argv[2],"-n")) || (strcmp(argv[2],"-N"))  ) )
   {
   increasing_order_sort(arr,n);
   }
   else if ( !(  (strcmp(argv[2],"-r")) || (strcmp(argv[2],"-R"))  ) )
   {
   decreasing_order_sort(arr,n);
   }
   else
   {
   printf("entered input is incorrect..\n");
   return ;
   }

   }

   else
   {
   printf("entered input is incorrect..\n");
   return ;
   }

   }
   */
