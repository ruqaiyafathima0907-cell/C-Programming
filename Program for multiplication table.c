#include <stdio.h>
#include <stdio.h>

int main() {
    int num, i = 1, limit;

    printf("Enter a number and its limit: ");
    scanf("%d %d", &num, &limit);
    do {
        printf("%d X %d = %d\n", num, i, num * i);
        i++;
    } while (i <= limit);

    return 0;
}

