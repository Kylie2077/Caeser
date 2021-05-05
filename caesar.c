#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Please enter the key.\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Key has to be the number.\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);
    printf("%i \n", key);
    string plaintext = get_string("Plaintext: ");
    string ciphertext = plaintext;


    for (int i = 0, n = strlen(ciphertext); i < n; i++)
    {
        if (isalpha(ciphertext[i]))
        {
            if (isupper(ciphertext[i]))
            {
                ciphertext[i] = (ciphertext[i] + key - 'A') % 26 + 'A';
            }

            else if (islower(ciphertext[i]))
            {
                ciphertext[i] = (ciphertext[i] + key - 'a') % 26 + 'a';
            }

        }
    }

    printf("ciphertext:%s\n", ciphertext);

}