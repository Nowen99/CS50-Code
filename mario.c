#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // user input

    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // looping

    for (int i = 0; i < height; i++)
    {
        // if user input is 5 - keeps looping printing 5 spaces before the #
        for (int spaces = 0; spaces < height - i - 1; spaces++)
        {
            printf(" ");
        }

        // loop completes
        // new loop - prints the hashtags
        for (int hashtag = 0; hashtag <= i; hashtag++)
        {
            printf("#");
        }
        // loop completes
        // new loop - prints 2nd row of spaces dividing the #'s
        int z = 2;
        for (int spaces2 = 0; spaces2 < z / 2; spaces2++)
        {
            printf("  ");
        }
        // loop completes
        // new loop - prints 2nd row of #'s
        for (int hashtag2 = 0; hashtag2 <= i; hashtag2++)
        {
            printf("#");
        }
        printf("\n");
    }
}
