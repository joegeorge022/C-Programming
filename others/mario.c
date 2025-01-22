#include <stdio.h>

int main()
{
    int n;

    // this do while loop keeps asking the user to input a number between 1 and 8
    do
    {
        printf("Height: ");
        scanf("%d", &n);
    }
    while (n <= 0 || n >= 9);

    for (int i = 0; i < n; i++)
    {
        // prints the spaces
        for (int j = 0; j < (n - i - 1); j++)
        {
            printf(" ");
        }
        // prints the bricks
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        // prints the set of bricks & spaces to a new line
        printf("\n");
    }
}
