#include <cs50.h>
#include <stdio.h>

int main(void)
{

int x=get_int("Enter x: ");

for(x=1; x<=10; x++)
{
printf("%d\n",x);
}
return 0;
}
