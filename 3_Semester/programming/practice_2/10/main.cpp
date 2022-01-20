#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, y;

    cout << "Enter x, y";
    cin >> x;
    cin >> y;


    if (x > 0 && y < 0)
    {
        cout << "Point not in a circle" << endl;
    }
    else
    {
        float radius = 2;
        float hypotenuse = sqrt(pow(x, 2) + pow(y, 2));

        if (hypotenuse <= radius)
        {
            cout << "Point in a circle" << endl;
        }
        else
        {
            cout << "Point not in a circle" << endl;
        }
    }

    return 0;
}
