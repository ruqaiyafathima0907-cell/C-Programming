#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum week {Sunday, Monday, Tuesday, Wednesday ,Thursday, Friday, Saturday};
int main()
{
    enum week day;
    day=Wednesday;
    printf("Numeric value of Wednesday is : %d\n",day);
    return 0;
}
