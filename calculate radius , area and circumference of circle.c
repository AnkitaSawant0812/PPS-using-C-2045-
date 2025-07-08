#include<stdio.h>
#define PI 3.1416

int main() {
    float diameter, radius, area, circumference;
    printf("Enter the diameter of the circle: ");
    scanf("%f", &diameter);
    radius = diameter / 2.0;
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Radius = %.2f\n", radius);
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);
    return 0;
}