#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    long long number;
    long long numb;
    long long secondlastdigit;
    long long getdigits;
    long long getremainders;
    int i;
    int temp = 0;
    int j; //last digit
    int k; //second last
    int overflow; //if digit becomes two digits after multiplying
    int digits = 0;
    int remainders = 0;
    long long check = 0;
    do
    {
        number = get_long_long("Number: ");
    }
    while (number < 0 || number > 9999999999999999);
    numb = number;
    getremainders = number;
    getdigits = number / 10;

    //final digit
    j = number % 10;
    remainders += j;

    //second last digit
    secondlastdigit = number / 10;
    k = secondlastdigit % 10;
    temp = 2 * k;
    if (temp > 9)
    {
        overflow = temp % 10;
        digits = overflow + temp / 10;
    }
    else
    {
        digits += 2 * k;
    }
    while (getremainders != 0)
    {

        getremainders /= 100;
        i = getremainders % 10;
        remainders += i;
    }
    number /= 10;
    while (getdigits != 0)
    {

        getdigits /= 100;
        i = getdigits % 10;
        temp = 2 * i;
        if (temp > 9)
        {
            overflow = temp % 10;
            digits += overflow + temp / 10;
        }
        else
        {
            digits += 2 * i;
        }

    }

    check = digits + remainders;

    if (check % 10 == 0 && numb >= 1111111111111 && numb <= 9999999999999999)
    {
        if ((numb >= 370000000000000 && numb <= 379999999999999) || (numb >= 340000000000000 && numb <= 349999999999999))
        {
            printf("AMEX\n");
        }
        else if (numb >= 5100000000000000 && numb <= 5599999999999999)
        {
            printf("MASTERCARD\n");
        }
        else if ((numb >= 4000000000000 && numb <= 4999999999999) || (numb >= 4000000000000000 && numb <= 4999999999999999))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}
