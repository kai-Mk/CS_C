/**
コンパイルする
gcc address.c -o address

出力する
./address
 */
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    string s = "HI!";
    printf("%c\n", s[0]);
}