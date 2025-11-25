#include <stdio.h>
#include <stdlib.h>
struct student
{
int id;
char name[20];
};
void display(struct student s[],int n )
{
    for(int i=0;i<n;i++)
        printf("ID: %d\n Name: %s\n",s[i].id,s[i].name);
}
int main()
{
    struct student s[3]={{101,"Anu"},{102,"Maya"},{103,"Vasu"}};
    display(s,3);
    return 0;
}
