#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    //     A       B
    //     +-------+
    //     \       \
    //     \       \
    //     \       \
    //     +-------+
    //     C       D

    float a, b; // y of A && y of C

    printf("Enter y of A: ");
    scanf("%f", &a);
    printf("Enter y of C: ");
    scanf("%f", &b);

    float side = a - b;
    float area = pow(side, 2);

    printf("Area: %4.2f \t", area);
    printf("Perimeter: %4.2f", area);

    return 0;
}
