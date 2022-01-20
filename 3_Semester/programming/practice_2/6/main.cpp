#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, d;

    cout << "Enter a, b, c, d" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    float r = a / b;
    float s = c / d;
    float t = d / a;

    float p = ((3 * s) - pow(r, 3)) / 3;
    float q = ((2 * pow(r, 3)) / 27) - ((r * s) / 3) + t;

    float D = pow(p / 3, 3) + pow(q / 2, 2);

    if (D < 0)
    {
        float ro = sqrt(pow(p, 3) / 27);
        float fi = acos(-q / (2 * p));

        float x1 = (2 * pow(ro, (float) 1 / 3) * cos(fi / 3)) - (ro / 3);
        float x2 = (2 * pow(ro, (float) 1 / 3) * cos((fi / 3) + ((2 * M_PI) / 3))) - (ro / 3);
        float x3 = (2 * pow(ro, (float) 1 / 3) * cos((fi / 3) + ((4 * M_PI) / 3))) - (ro / 3);

        cout << "x1, x2, x3 = " << x1 << ", " << x2 << ", " << x3 << endl;
    }
    else
    {
        float u = pow((-q / 2) + sqrt(D), (float) 1 / 3);
        float v = pow((-q / 2) - sqrt(D), (float) 1 / 3);

        float h = ((-u + v) / 2) - (r / 3);
        float g = sqrt(3) * ((u - v) / 3);

        float x1 = (u + v) - (r / 3);

        cout << "x1 = " << x1 << endl;
        cout << h << " + i * " << g << endl;
        cout << h << " - i * " << g << endl;
    }

    return 0;
}
