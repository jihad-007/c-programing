#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  if(n>=0 && n%2 == 0)
  {
       printf("EVEN");
  }
  else if(n>=0 && n%2 !=0)
  {
       printf("ODD");
  }
  else
  {
    printf("SORRY! You Can't Give Non int.");
  }
    return 0;
}