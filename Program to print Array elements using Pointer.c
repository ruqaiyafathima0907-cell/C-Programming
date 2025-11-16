#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[5]={10,20,30,40,50};
int *p=a;
printf("Array elements using Pointer ");
for(int i=0;i<5;i++)
printf("%d""    ",*(p+i));
return 0;
}
