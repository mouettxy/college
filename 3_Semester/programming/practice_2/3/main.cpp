#include <iostream>

using namespace std;

int main()
{
    float x, y;

    cin >> x;
    cin >> y;

    if ((y <= 1 + (float) 1 / 2 * x && y <= -2 * x + 11 && y >= 1)
            || (y <= 1 - (float) 1 / 2 * x && y <= 2 * x + 11 && y >= 1))
    {
        cout << "Point is correct";
    }
    else
    {
        cout << "Point incorrect";
    }

    return 0;
}
