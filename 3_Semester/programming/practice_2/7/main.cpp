#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;

    cout << "Enter a, b, c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    float d = pow(b, 2) - (4 * a * c);
    if (d < 0)
    {
        cout << "No valid roots" << endl;
    }
    else
    {
        float y1 = (-b + sqrt(d)) / (2 * a);
        float y2 = (-b - sqrt(d)) / (2 * a);

        if (y1 < 0 && y2 < 0)
        {
            cout << "No valid roots" << endl;
        }
        else
        {
            if (y1 >= 0 && y2 >= 0)
            {
                float x1 = sqrt(y1);
                float x2 = -x1;
                float x3 = sqrt(y2);
                float x4 = -x3;

                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
                cout << "x3 = " << x3 << endl;
                cout << "x4 = " << x4 << endl;
            }
            else
            {
                if (y1 >= 0)
                {
                    float x1 = sqrt(y1);
                    float x2 = -x1;

                    cout << "x1 = " << x1 << endl;
                    cout << "x2 = " << x2 << endl;
                }
                else {
                    float x3 = -sqrt(y2);
                    float x4 = -x3;

                    cout << "x3 = " << x3 << endl;
                    cout << "x4 = " << x4 << endl;
                }
            }
        }
    }

    return 0;
}
