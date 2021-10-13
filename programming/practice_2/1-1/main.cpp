#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // a^2 + 2b + c = 0
    float a, b, c;

    cout << "Enter a, b, c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    float d = pow(b, 2) * (4 * a * c);

    if (d < 0)
    {
        cout << "No roots";
    }
    else
    {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }


    return 0;
}
