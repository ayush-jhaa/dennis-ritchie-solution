/*   Exercise 5-14. Modify the sort program to handle a -r flag, which indicates sorting in reverse (decreasing) order.
 *   Be sure that -r works with -n.
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void input(int *,int);
void decreasing_order_sort(int *,int);
void increasing_order_sort(int *,int);
void output(int *, int);

int main(int argc, char *argv[])
{
     int n;
     printf("enter value of n..\n");
     scanf("%d",&n);

     if (argc !=2)
     {
       printf("entered input is incorrect..\n");
       return 1;
     }

     int arr[n];

     input(arr,n);
     
     if( !(strcmp(argv[1],"-n")) )
     {
       increasing_order_sort(arr,n);
     }
     else
     {
        decreasing_order_sort(arr,n);
     }

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
