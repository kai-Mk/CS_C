/*
clang -o phonebook phonebook.c -lcs50
*/
#include <cs50.h>
#include <stdio.h>
#include <string.h>


typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{

    person people[2];
    people[0].name = "Jack";
    people[0].number = "040-2334-4392";

    people[1].name = "raw";
    people[1].number = "046-2934-4322";

    // string names[] = {"Jack", "raw"};
    // string numbers[] = {"040-2334-4392", "046-2934-4322"};

    for (int i = 0; i < 2; i ++)
    {
        if (strcmp(people[i].name, "raw") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}