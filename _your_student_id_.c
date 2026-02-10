#include <cs50.h>
#include <stdio.h>
int main ( )
{
    int secret_num = 22;
    int guess_num;
    int count_num =0;

    while (count_num <3)
    {
        guess_num = get_int("Enter the guess number: ");
        count_num++;
        if(guess_num <secret_num)
        {
            printf("Too low!\n");
        }else if (guess_num > secret_num)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Congratulations! You got the correct number in %d \n", count_num);
        }

    }

    printf("Game Over.The number is 22.\n");

    return 0;

}
