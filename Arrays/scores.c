/*
clang -o scores scores.c -lcs50
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("How many Scores?: ");

    int scores[n];

    for (int i = 0; i < n; i++){
        scores[i] = get_int("Score?: ");
    }

   int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }

    printf("Average: %f\n", sum / (float)n);
}