#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0 || height > 23);

        //now is where you draw the puzzle
        //draws number of spaces = height now
        for (int i = 0; i < height; i++)
            {
                //do left side
                for (int s = height - i - 1; s > 0; s--)
                {
                    printf(" ");
                }
                for (int h = height; h < height + i + 1; h++)
                {
                    printf("#");
                }
                printf("  ");
                //do right side
                for (int h = height; h < height + i + 1; h++)
                {
                    printf("#");
                }


                //next row
                printf("\n");
            }
}
