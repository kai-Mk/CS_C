/**
コンパイルする
gcc calculator.c -o calculator

出力する
./calculator
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
    int x = get_int("xに値を入力してください:");
    int y = get_int("yに値を入力してください:");
    int sum = x + y;
    printf("%i\n", sum);

    if (x < y)
    {
        printf("yはxより大きいです\n");
    } 
    else if (y < x)
    {
        printf("xはyより大きいです\n");
    }
    else if (x == y)
    {
        printf("xとyは同値です\n");
    }
}