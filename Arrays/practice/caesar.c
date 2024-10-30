/*
clang -o caesar caesar.c -lcs50
*/
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        char *end;
        long value = strtol(argv[1], &end, 10);

        if (*end != '\0') {
        printf("Error: The input is not a valid decimal number.\n");
        return 1;
        }

        string word = get_string("Please input word: ");
        printf("Before: %s\n", word);
        for (int i = 0; i < strlen(word); i++)
        {
            if (isupper(word[i]))
            {
                word[i] = 'A' + (word[i] - 'A' + value) % 26;
            } 
            else if(islower(word[i]))
            {
                word[i] = 'a' + (word[i] - 'a' + value) % 26;
            }
        }
        printf("After: %s\n", word);
    }else
    {
        printf("Please input a key\n");
        return 1;
    }
}