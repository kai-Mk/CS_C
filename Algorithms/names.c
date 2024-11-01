/*
clang -o names names.c -lcs50
*/
#include <cs50.h>
#include <stdio.h>
#include <string.h>


// 全体がJSだとfind関数だね。簡単にしてくれてありがとう。
int main(void)
{
    string names[] = {"Bill", "Mike", "Takashi", "helen"};

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], "Mike") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}