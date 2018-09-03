#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    int i = 0;
    float fchange;
    do
    {
        fchange = get_float("Cash: ");
    }
    while (fchange < 0);
    fchange = round(fchange * 100);
    int change = (int)fchange;

    //I want the minimum number of coins for change

    for (i = 0; change > 0; i++)
    {
        if (change >= 25)
        {
            change -= 25;
        }
        else if (change >= 10)
        {
            change -= 10;
        }
        else if (change >= 5)
        {
            change -= 5;
        }
        else if (change >= 1)
        {
            change -= 1;
        }
    }
    printf("%i\n", i);
    return 0;
}
