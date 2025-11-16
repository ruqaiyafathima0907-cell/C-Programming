#include <stdio.h>
#include <stdlib.h>
int *getelement(int a[],int index)
{
return &a[index];
}

int main()
{
int a[5]={4,8,12,16,20};
int *p=getelement(a,2);
printf("Element at index 2=%d\n",*p);
return 0;
}


