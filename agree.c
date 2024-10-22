/**
コンパイルする
gcc agree.c -o agree

出力する
./agree.c
 */
 #include <stdio.h>

char get_char(const char *input_msg) 
{
    char value;
    printf("%s", input_msg);
    scanf("%c", &value);

    return value;
}

int main(void)
{
    int agree = get_char("agree? (y/n)");
    if (agree == 'y' || agree == 'Y')
    {
        printf("agree!!\n");
    }
    else if (agree == 'n' || agree == 'N')
    {
        printf("Not agree.\n");
    }
    else 
    {
        printf("%cは対応していません\n", agree);
    }
}