#include<stdio.h>
int main()
{
 int r,i;
 printf("Enter the range to find which numbers are even and which are odd: \n");
 scanf("%d",&r);
 for(i=0;i<=r;i++)
 {
  if(i%2==0)
  {
   printf("\nEven Number = %d",i);
  }
  else
  {
   printf("\nOdd  Number = %d",i);
  }
 }
 return 0;
}

