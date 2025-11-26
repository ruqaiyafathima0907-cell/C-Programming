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
printf("Title of the book: %s\n",b1.title);
printf("Author of the book: %s\n",b1.author);
printf("Price of the book: %2f\n",b1.price);
struct books b2={"Magical life","Diana",650.00};
printf("Title of the book: %s\n",b2.title);
printf("Author of the book: %s\n",b2.author);
printf("Price of the book: %2f\n",b2.price);
struct books b3={"Success isn't easy","Harry",1050.00};
printf("Title of the book: %s\n",b3.title);
printf("Author of the book: %s\n",b3.author);
printf("Price of the book: %2f\n",b3.price);
return 0;
}
