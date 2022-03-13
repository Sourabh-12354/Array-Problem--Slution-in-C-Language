#include<stdio.h>
int main()
{
   int n,i,large=0,small;
   printf("How Many Number You Want to Insert:");
   scanf("%d",&n);
   int arr[n];
   printf("Enter array Elememnts: ");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
       small=arr[0];
   }
   for(i=0;i<n;i++)
   {
       if(arr[i]>large)
       {
           large=arr[i];
       }
       else if(arr[i]<small)
       {
           small=arr[i];
       }
   }
   printf("Largest=%d\n",large);
   printf("Smallest=%d",small);
}
