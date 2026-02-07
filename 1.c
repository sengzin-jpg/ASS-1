#include<cs50.h>
#include <stdio.h>

int main(void)

{
int x=get_int ("Enter x: ");
int y= get_int ("Enter y: ");
int sum,difference, product, quotient, remainder;

sum=x+y;
difference= x-y;
product=x*y;
quotient=x/y
remainder= x%y;

printf("sum= %d\n", sum);
printf("difference= %d\n", difference);
printf("product= %d\n", product);
printf("quotient=%d\n", quotient);
printf("remainder= %d\n" remainder);

return 0;

}
