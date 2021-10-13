#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    float r = (a + b + c) / 2;

    float _S = r * (r - a) * (r - b) * (r - c);
    float S = sqrt(_S);

    cout << "r = " << r << endl;
    cout << "S = " << S << endl;

    return 0;
}
