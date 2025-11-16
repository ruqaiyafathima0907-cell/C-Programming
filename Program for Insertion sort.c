#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a[5]={25,12 ,22,64,11};
    int i,j,key;
    for(i=0;i<5;i++)
    {
        key=a[i];
    j=i-1;
    while(j>=0&&a[j]>key)
    {
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=key;
    }
    printf("Sorted array ");
    for(i=0;i<5;i++)
        printf("%d""    ",a[i]);
    return 0;
}
