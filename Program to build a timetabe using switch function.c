#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{
    int sub;

    printf("Select a number (1, 2, 3, 4, 5): ");
    scanf("%d", &sub);

    switch (sub)
    {
        case 1:
            printf("Maths at 7:15\n");
            break;

        case 2:
            printf("C program at 8:15\n");
            break;

        case 3:
            printf("Break at 9:15\n");
            break;

        case 4:
            printf("Physics at 10:00\n");
            break;

        case 5:
            printf("Linux at 11:00\n");
            break;

        default:
            printf("Invalid input\n");
    }

    return 0;
}
