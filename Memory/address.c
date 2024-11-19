/**
コンパイルする
gcc address.c -o address

出力する
./address
 */

#include <stdio.h>

int main (void)
{
    int n = 50;
    int *p = &n;
    printf("%i\n", n);
    // コンピュータのメモリのどこに格納されているかを確認できる
    printf("%p\n", p);
    // この場合はn=50が表示される
    printf("%i\n", *p);
}