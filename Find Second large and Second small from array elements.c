#include<stdio.h>
int main()
{
   int n,i,large=0,scnd_large=0,small,scnd_small;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {

      scanf("%d",&arr[i]);
      small=arr[0];
      scnd_small=arr[1];
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
 for(i=0;i<n;i++)
   {

      if(arr[i]>scnd_large && arr[i]<large)
      {
        scnd_large=arr[i];
      }
      else if(arr[i]<scnd_small && arr[i]>small)
      {
        scnd_small=arr[i];
      }
   }
   printf("Second Large=%d\n",scnd_large);
   printf("Second Small=%d\n",scnd_small);
}
