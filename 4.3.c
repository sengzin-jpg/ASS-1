#include <cs50.h>
#include <stdio.h>
int main(void)
{
 int x = get_int ("Enter x: ");
 int y = get_int ("Enter y: ");

 if (x>y)
 {
    printf ("%d is greater than %d", x,y);
 }
else if (x<y)
 {
    printf("%d less than %d", x,y);
 }
else
 {
    printf("Equal");
 }
return 0;

}
