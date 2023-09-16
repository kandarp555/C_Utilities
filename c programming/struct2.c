//define a structure called cricket that will discribe the following information.
#include <stdio.h>
struct cricket
{
    char name[50];
    int Run;
    float Avrg;

} player[50];

int main()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {

        printf("Enter the player %d name:\n", i + 1);
        scanf("%s", &player[i].name);
        printf("Enter the player %d run:\n", i + 1);
        scanf("%d", &player[i].Run);
    }

    for (j = 0; j < 3; j++)
    {

        printf("%s scored %d run \n", player[j].name, player[j].Run);
    }

    return 0;
}