// programme to find whether the given year is leap year or not
//leap year or not
#include<stdio.h>
int main()
{
int year;
printf("enter the year ");
scanf("%d",&year);
  if(year %4 ==0)
      if(year % 100!=0)
      {printf("the year is leap year");}
      else
      {printf("the year is normal year");
    }
  else
  {printf("the year is normal year");
  }
  return 0;
  
   }

   //out put
   enter the year 2024
the year is leap year

enter the year 2022
the year is normal year

=== Code Execution Successful ===
=== Code Execution Successful ===
