#include <stdio.h>
#include <stdlib.h>
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
      printf("%d""    ",a[i]);
    }
}

int main()
{
    int a[]={10,20,30,40,50};
    display(a,5);
}



