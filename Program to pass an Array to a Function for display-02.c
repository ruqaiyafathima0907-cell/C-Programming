#include <stdio.h>
#include <stdlib.h>
void display(int a[],int n)
{
    int i;
    printf("Array element ");
    for(i=0;i<n;i++)
        printf("%d""   ",a[i]);
}

int main()
{
    int a[5]={10,20,30,40,50};
    display(a,5);
    return 0;
}
