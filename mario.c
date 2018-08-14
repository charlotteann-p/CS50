#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    eprintf("This line of code should be executed\n");
    do
    {
        n = get_int("Height: ");
    }
    while (n < 0 || n >= 24);
    n++;
    for (int i = 2; i <= n; i++)
    {

        for (int j = n; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}