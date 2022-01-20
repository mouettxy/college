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

    float p = a + b + c;

    float _S = p / 2 * (p / 2 - a) * (p / 2 - b) * (p / 2 - c);
    float S = sqrt(_S);

    cout << "p = " << p << endl;
    cout << "S = " << S << endl;

    return 0;
}
