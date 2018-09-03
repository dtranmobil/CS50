#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

bool valid_triangle(float x, float y, float z);

int main(void)

{

    float x = get_float("x: ");
    float y = get_float("y: ");
    float z = get_float("z: ");
    int result = valid_triangle(x,y,z);
    printf("%i\n", result);

}


bool valid_triangle(float x, float y, float z)
{
    if (x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }
    if ((x + y <= z) || (x + z <= y) || (y + z <= x))
    {
        return false;
    }
    return true;
}

