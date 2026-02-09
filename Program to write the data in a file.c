#include <stdio.h>
#include <stdlib.h>
int main()
{

    FILE *fp;
    fp=fopen("data.txt","w");
    if(fp==NULL)
    {
    printf("File cannot be opened");
    return 1;
    }
    fprintf(fp,"Welcome to C program. \n");
    fprintf(fp,"This is a sample file\n");
    fclose(fp);
    printf("Data written sucessfully");
    return 0;
}
