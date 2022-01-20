#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float x;

    printf("Enter X: ");
    scanf("%f", &x);

    float resultLeft = pow((1 + 3 * M_PI) / (1 + pow(x, 2)), 1./3);
    float resultRight = abs(pow(atan(pow(x, 3)), 3));

    float result = resultLeft + resultRight;

    printf("Result is: %4.2f", result);

    return 0;
}
