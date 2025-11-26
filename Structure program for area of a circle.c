#include <stdio.h>
#include <stdlib.h>#include <stdio.h>
struct Circle
{
    float radius;
};
float calculateCircleArea(struct Circle c)
 {
    return 3.14159 * c.radius * c.radius;
}

int main()
{
    struct Circle myCircle;
    printf("Enter the radius of the circle: ");
    scanf("%2f", &myCircle.radius);
    float area = calculateCircleArea(myCircle);
    printf("The area of the circle with radius %.2f is: %.2f\n", myCircle.radius, area);
    return 0;
}
