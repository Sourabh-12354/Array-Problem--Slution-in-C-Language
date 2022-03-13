#include<stdio.h>
int main()
{
  int n,i,index;
  scanf("%d",&n);
  int arr[n];
  printf("Enter %d Elements: ",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
    printf("Enter Index Number: ");
    scanf("%d",&index);
     for(i=index;i<n;i++)
  {
     if(i==index)
     {
         printf("%d",arr[i]);
     }
  }
}
