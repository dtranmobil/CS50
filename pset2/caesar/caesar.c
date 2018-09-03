#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])

{
    if (argc == 2)
    {
    //convert string argv to int
    int k = atoi(argv[1]);

    //get user input as string
    string p = get_string("plaintext: ");
    printf("ciphertext: ");

        //give me the next sequence based on argv[]
        for (int i = 0; i < strlen(p); i++)
        {
            int alpha = p[i];
            //move ASCII values to alphabetical
            if (p[i] >= 65 && p[i] <= 90)
                {
                    alpha -= 65;
                    int c = (alpha + k) % 26;

                    char output = c + 65;
                    printf("%c", output);
                }
            else if (p[i] >= 97 && p[i] <= 122)
                {
                    alpha -= 97;
                    int c = (alpha + k) % 26;
                    char output = c + 97;
                    printf("%c", output);
                }
            else
                {
                    printf("%c", p[i]);
                }
        }
        printf("\n");
    }
    else
    {
        return 1;
    }
    return 0;
}