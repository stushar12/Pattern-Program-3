#include<stdio.h>
int main()
{
  int n;
  printf("\nEnter the limit  ");
  scanf("%d",&n);
  for(int i=n;i>=1;i--)
  {
    for(int j=n-i;j<=n;j++)
    {
      printf(" ");
    }
    for(int k=i;k<=n;k++)
    {
    printf("%d ",k);
  }
    printf("\n");
  }

  }
