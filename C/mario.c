/**
コンパイルする
gcc mario.c -o mario

出力する
./mario
 */
#include <stdio.h>

int get_int(const char *input_msg);

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);


    // For each row
    for (int i = 0; i < n; i++ )
    {
        // For each column
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int get_int(const char *input_msg)
{
    int value;
    printf("%s", input_msg);
    scanf("%d", &value);

    return value;
}