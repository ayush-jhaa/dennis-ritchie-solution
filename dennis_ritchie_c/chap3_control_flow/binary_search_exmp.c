#include<stdio.h>
#include<stdlib.h>

int binary_search(int key,int low, int high,int arr[])
{
    int mid=0;

     while(low<=high)
     {
       mid=(low+high)/2;

       if(key==arr[mid])
        return mid;

       else if(key<arr[mid])
	high=mid-1;

       else
	low=mid+1;
     }
     return -1;
}

int main()
{
   int arr[10],key;

   printf("enter array elements:\n");

   for(int i=0;i<10;i++)
    scanf("%d",&arr[i]);

   int l=0;
   int h=9;

   printf("enter key to find in array..\n");
   scanf("%d",&key);

   if(binary_search(key,l,h,arr)==-1)
    printf("value not found");

   else
   printf("index:-%d",binary_search(key,l,h,arr));

}
