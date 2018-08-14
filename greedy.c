#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float n;
    int a = 0;
    eprintf("This line of code should be executed\n");
    do
    {
        n = get_float("Change owed: ");
    }
    while (n < 0);
    n = n + .001;
    while (n >= .25)
    {
        n = n - .25;
        a++;
    }
    while (n >= .10)
    {
        n = n - .10;
        a++;
    }
    while (n >= .05)
    {
        n = n - .05;
        a++;
    }
    while (n >= .01)
    {
        n = n - .01;
        a++;
    }
    printf("Amount of coins: %i coins", a);
}