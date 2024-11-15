#include<stdio.h>
int main ;
{
 int n,count=0;
 printf("Enter any number");
 scanf("%d",&n);
 
   for(count=0;n>0;count++)
    {
     n=n/10;
    }
    
  printf("No.of digits in the given number is %d",count);
  return 0; 
}

//output
736829
No.of digits in the given number is 6
