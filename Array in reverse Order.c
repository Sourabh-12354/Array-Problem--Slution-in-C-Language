#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
     scanf("%d",&arr[i]);
  }
  printf("Array in Reverse Order: ");
  for(i=n-1;i>=0;i--)
  {
     printf("%d ",arr[i]);
  }
}
