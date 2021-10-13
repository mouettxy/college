#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cin >> x;
    cin >> y;

    if (x >= -1 && x <= 3 && y >= -2 && y <= 4)
    {
        cout << "Point correct";
    }
    else
    {
        cout << "Point incorrect";
    }

    return 0;
}
