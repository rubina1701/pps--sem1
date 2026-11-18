#include<stdio.h>
int main()
{
 int arr[100],N,i,key;
 int low,high,mid,found=0;

 printf("enter the size of n elements");
 scanf("%d",&N);

 printf("enter %d values in sorted order:\n",N);

 for(i=0;i<N;i++)
 {
   scanf("%d",&arr[i]);
 }
   printf("array is:\n");

   for(i=0;i<N;i++)
   {
     printf("%d",arr[i]);
     while(low<=high)
{
   printf("\n enter key value to find:");
   mid=(low+high)/2;
   scanf("%d",&key);

   low=0;
   high=N-1;


   if(arr[mid]=key)
   {
   found=1;
   printf("value found at %d position\n",mid+1);
   break;
   }
   else if(key<arr[mid])
   {
    high=mid-1;
   }
   else
   {
     low=mid+1;
   }
   if (found==0)
   printf("value not found\n");
   }
  }
  return 0;
  }
