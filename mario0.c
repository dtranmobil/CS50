#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;
    int y;
    do
    {

        x = get_int("Width: ");
        y = get_int("Height: ");
        //Print this many rows
        for (int i = 0; i < y ; i++)
        {
            //Print this many columns
            for (int W = 0; W < x; W++)
            {
                printf("?");

            }
            printf("\n");
        }
    }
    while (x <= 0 || y <= 0);
}
