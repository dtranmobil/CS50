#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])

{
    int tozero;
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isalpha(argv[1][i]))

            return 1;
        }
        string plaintext = get_string("plaintext: ");

        printf("ciphertext: ");
        //for each letter do the following
        for (int i = 0, j = 0, n = strlen(plaintext); i < n; i++)
        {
            if(argv[1][j] >= 'a' && argv[1][j] <= 'z')
                        {
                            tozero = 97;
                        }
                        else if (argv[1][j] >= 'A' && argv[1][j] <= 'Z')
                        {
                            tozero = 65;
                        }
            //get k[j] which is how many p should be moved increasing by 1 each loop and add that to p
            if (plaintext[i] >= 97 && plaintext[i] <= 122)
            {
                if (argv[1][j] != '\0')
                    {

                        int k = argv[1][j] - tozero;
                        char output = (plaintext[i] - 97 + k) % 26;
                        j++;
                        if(plaintext[i] < 'A' || plaintext[i] > 'z')
                        {
                            j--;
                        }
                        printf("%c", output + 97);
                    }

                else
                    {
                        j = 0;
                        if(argv[1][j] >= 'a' && argv[1][j] <= 'z')
                            {
                                tozero = 97;
                            }
                        else if (argv[1][j] >= 'A' && argv[1][j] <= 'Z')
                            {
                                tozero = 65;
                            }
                        int k = argv[1][j] - tozero;
                        char output = (plaintext[i] - 97 + k) % 26;
                        j++;
                        if(plaintext[i] < 'A' || plaintext[i] > 'z')
                        {
                            j--;
                        }
                        printf("%c", output + 97);
                    }
            }
            else if (plaintext[i] >= 65 && plaintext[i] <= 90)
            {
                if (argv[1][j] != '\0')
                    {
                        int k = argv[1][j] - tozero;
                        char output = (plaintext[i] - 65 + k) % 26;
                        j++;
                        if(plaintext[i] < 'A' || plaintext[i] > 'z')
                        {
                        j--;
                        }
                        printf("%c", output + 65);
                    }

                else
                    {
                        j = 0;
                        if(argv[1][j] >= 'a' && argv[1][j] <= 'z')
                        {
                            tozero = 97;
                        }
                        else if (argv[1][j] >= 'A' && argv[1][j] <= 'Z')
                        {
                            tozero = 65;
                        }
                        int k = argv[1][j] - tozero;
                        char output = (plaintext[i] - 65 + k) % 26;
                        j++;
                        if(plaintext[i] < 'A' || plaintext[i] > 'z')
                        {
                        j--;
                        }
                        printf("%c", output + 65);
                    }
            }
            else
                {
                    printf("%c", plaintext[i]);
                }

        }
        printf("\n");
        return 0;
    }

    else
    {
        return 1;
    }
}