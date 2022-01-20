#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;

    cout << "Enter a, b, c";
    cin >> a;
    cin >> b;
    cin >> c;

    float d = pow(b, 2) * (4 * a * c);

    if (d < 0)
    {
        cout << "No valid roots";
    }
    else
    {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);

        cout << "x1, x2 = " << x1 << ", " << x2;
    }

    return 0;
}
