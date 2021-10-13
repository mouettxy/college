#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y;
    cin >> x;

    if (x <= -2)
    {
        y = 4;
    }
    else if (x >= 1)
    {
        y = 1;
    }
    else
    {
        y = pow(x, 2);
    }

    cout << "x, y = " << x << ", " << y << endl;

    return 0;
}
