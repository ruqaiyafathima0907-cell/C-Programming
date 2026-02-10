#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fp;
fp=fopen("exam.txt","w");
if(fp==NULL){
    printf("File opening failed");
    return 1;
}
printf("File opened successfully\n ");
fclose(fp);
printf("File closed successfully\n");
return 0;
}
