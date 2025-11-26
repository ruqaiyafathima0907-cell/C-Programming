#include <stdio.h>
#include <stdlib.h>

struct books
{
char title[100];
char author[100];
float price;
};
int main()
{
struct books b1={"The lost one","James",450.00};
printf("%s %s %2f",b1.title,b1.author,b1.price);
struct books b2={"Magical life","Diana",650.00};
printf("%s %s %2f",b2.title,b2.author,b2.price);
struct books b3={"Success isn't easy","Harry",1050.00};
printf("%s %s %2f",b3.title,b3.author,b3.price);
struct books b4={"Burning chains","Maya",1000.00};
printf("%s %s %2f",b4.title,b4.author,b4.price);
struct books b5={"Broken wings","",1050.00};
printf("%s %s %2f",b5.title,b5.author,b5.price);
  return 0;
}

