#include<stdio.h>
int main()
{
   int n,i,sum=0;
   float avg;
   printf("How many Elements You Want to Insert:");
   scanf("%d",&n);
   int arr[n];
   printf("Enter Elements:");
   for(i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
     sum+=arr[i];
   }
   avg=sum/n;
   printf("The Avarage of the Array Elements is: %.2f",avg);
}
