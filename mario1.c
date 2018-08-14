#include <stdio.h>

int main(void)
{
    int n;
    printf("Hello");
    do
    {
        n = get_int("Positive number: ");
    }
    while (n <= 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}