/*
clang -o length length.c -lcs50
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Name: ");

    // 文字の長さを返す関数
    int i = strlen(name);
    printf("%i\n", i);
}