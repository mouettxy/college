#include <iostream>

using namespace std;

int main()
{
    float a, b, s, p;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    p = 2 * (a + b);
    s = a * b;
    wcout << "Perimeter of rectange " << p << endl;
    wcout << "Area of rectangle " << s << endl;
    return 0;
}
