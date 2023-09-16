#include <stdio.h>
int main()
{
    int per;

    printf("Enter the percentage :\n");
    scanf("%d", &per);

    switch (per / 10)
    {

    case 10:
    case 9:
        printf("You got A+ Grade");
        break;

    case 8:
        printf("You got A Grade");
        break;

    case 7:
        printf("You got B+ Grade");
        break;
    case 6:
        printf("You got B Grade");
        break;
    case 5:
        printf("You got C+ Grade");
        break;
    case 4:
        printf("You got C Grade");
        break;
    default:
        printf("You got F Grade");
        break;
    }

    return 0;
}