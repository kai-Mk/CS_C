/**
コンパイルする
gcc discount.c -o discount

出力する
./discount
 */
#include <stdio.h>

float get_float(const char *input_msg);
int get_int(const char *input_msg);
float discount (float price, int percent_off);

int main(void)
{
    float regular = get_float("Regular Price: ");
    int percent_off = get_int("Percent Off: ");
    float sale = discount(regular, percent_off);
    printf("Sale Price: %.2f\n", sale);
}

float discount (float price, int percent_off)
{
    return price * (100 - percent_off) / 100;
}


float get_float(const char *input_msg) {
    float value;
    printf("%s", input_msg);

    // scanfの戻り値を確認する
    if (scanf("%f", &value) != 1) {
        printf("入力エラーです。\n");
        // エラー処理（例えば、プログラムを終了する、再度入力を促すなど）
        return 0; // エラーを示す値を返す（任意）
    }

    return value;
}

int get_int(const char *input_msg)
{
    int value;
    printf("%s", input_msg);
    scanf("%d", &value);

    return value;
}