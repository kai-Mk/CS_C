/*
clang -o exit exit.c -lcs50
*/
#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (!argc == 2)
    {
    printf("good by");
    return 1;
    }
        printf("hello, %s\n", argv[1]);
}