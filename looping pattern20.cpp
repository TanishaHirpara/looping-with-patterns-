#include<stdio.h>

int main()

{
 int i,j;
 
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++)
  {
   if((i+j)%2==0)
   {
  printf("-");
   }
 else
 {
  printf("|");
 }
  }
 printf("\n");
 }

}



