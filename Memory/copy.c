/**
コンパイルする
clang -o copy copy.c -lcs50

出力する
./copy
 */
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) 
{
    string s = get_string("s: ");
    string t = s;
    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);

}