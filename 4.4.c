#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int x= get_int ("Enter year: ");
if ((x%4==0 && x%100!=0)//x%400==0)
  {
    printf("Leap year");
  }
else
   {
    printf("not leap year");
   }
return 0;

}
