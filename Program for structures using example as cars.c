#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
struct Date
{
    int date;
    char mon[10];
    int yr;
};
struct car
{
    char company[50];
    char model[20];
    float price;
    struct Date dob;
};
int main()
{
    struct car s1={"Maruthi Suzuki","Swift",1720000.89,{15,"Jan",2010}};
    printf("Company Name:%s\n",s1.company);
    printf("Model name: %s\n",s1.model);
    printf("Price: %.2f\n",s1.price);
    printf("DOB:%d-%s-%d\n",s1.dob.date,s1.dob.mon,s1.dob.yr);
    struct car s2={"Tata motor","Safari",1180090.89,{20,"Feb",2005}};
    printf("Company Name:%s\n",s2.company);
    printf("Model name: %s\n",s2.model);
    printf("Price: %.2f\n",s2.price);
    printf("DOB:%d-%s-%d\n",s2.dob.date,s2.dob.mon,s2.dob.yr);
    struct car s3={"Mahindra","Bolero",2230000.00,{02,"Mar",2011}};
    printf("Company Name:%s\n",s3.company);
    printf("Model name: %s\n",s3.model);
    printf("Price: %.2f\n",s3.price);
    printf("DOB:%d-%s-%d\n",s3.dob.date,s3.dob.mon,s3.dob.yr);
    struct car s4={"Honda","City",390000.89,{18,"Jan",2010}};
    printf("Company Name:%s\n",s4.company);
    printf("Model name: %s\n",s4.model);
    printf("Price: %.2f\n",s4.price);
    printf("DOB:%d-%s-%d\n",s4.dob.date,s4.dob.mon,s4.dob.yr);
    return 0;
}
