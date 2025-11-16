#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[]={10,20,30,40,50};
    int count=sizeof(a)/sizeof(a[0]);
    printf("Total number of elements in the Array =%d\n",count);
    return 0;

}
