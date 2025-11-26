#include <stdio.h>
#include <stdlib.h>
int main()
{
int *a;
a=(int *)calloc(5,sizeof(int));
if(a==NULL)
{
printf("Allocation failed\n");
return 1;
}
for(int i=0;i<5;i++)
printf("%d",a[i]);
free(a);
return 0;
}
