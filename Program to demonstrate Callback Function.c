#include <stdio.h>
#include <stdlib.h>
void sayhello()
{
printf("HEllo students! You just called me back!\n");
}
void studentwork(void(*callbackfun)())
{
printf("Student is doing homework  ");
callbackfun();
}

int main()
{
studentwork(sayhello);
return 0;
}
