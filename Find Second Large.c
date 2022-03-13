#include<stdio.h>
int main()
{
  int n,i,large=0,second_large=0;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
   for(i=0;i<n;i++)
  {
     if(arr[i]>large)
     {
         large=arr[i];
     }

  }
  printf("Large=%d\n",large);
  for(i=0;i<n;i++)
  {
     if(arr[i]>second_large && arr[i]<large)
     {
         second_large=arr[i];
     }

  }
  printf("second large= %d\n",second_large);
}
