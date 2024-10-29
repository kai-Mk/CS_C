/**
コンパイルする
gcc points.c -o points

出力する
./points
 */
#include <stdio.h>

int get_int(const char *input_msg)
{
    int value;
    printf("%s", input_msg);
    scanf("%d", &value);

    return value;
}

int main(void)
{
    int points = get_int("How many points");
}