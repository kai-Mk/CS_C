/*
clang -o scrabble scrabble.c -lcs50
*/
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int get_score(char word);
int get_total_score(string word);

int main(void)
{
    string word1 = get_string("Player1: ");
    string word2 = get_string("Player2: ");

    int score1 = get_total_score(word1);
    int score2 = get_total_score(word2);

    if (score1 > score2)
    {
        printf("Winner: Player1!!\nScore: %i\n", score1);
    } else if (score1 < score2)
    {
        printf("Winner: Player2!!\nScore: %i\n", score2);
    } else 
    {
        printf("Draw!!\nScore: %i\n", score1);
    }
}


int get_score(char word)
{
        // 配列にA～Zまでのスコアを入れる
        int scores[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 
        5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 
        1, 4, 4, 8, 4, 10
    };

    word = toupper(word);
    // 入力した文字がA~Zではない場合は0天にする
    if (word < 'A' || word > 'Z')
    {
        return 0;
    }

    return scores[word - 'A'];

}

int get_total_score(string word)
{
    int total_score = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        total_score += get_score(word[i]);
    }
    return total_score;
}