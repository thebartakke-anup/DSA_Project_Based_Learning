/*WAP to accept the radius and calculate the area, surface area, and volume of a sphere*/

#include <stdio.h>
#include <math.h>

int main() {
    double r = 0.0;
    double a = 0.0;
    double sa = 0.0;
    double v = 0.0;
    double Pi = 3.14159;

    printf("Enter the radius : \n");
    scanf("%lf", &r);

    a = Pi * pow(r, 2);
    sa = 4 * Pi * pow(r, 2);
    v = (4.0/3.0) * Pi * pow(r, 3);

    printf("Area : %0.2lf \n", a);
    printf("Surface Area : %0.2lf \n", sa);
    printf("Volume : %0.2lf \n", v);

    return 0;
}