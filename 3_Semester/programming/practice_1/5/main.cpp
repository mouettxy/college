#include <iostream>

using namespace std;

int main()
{
    int i;
    double d;
    cout << "i = ";
    cin >> i;
    cout << "d = ";
    cin >> d;

    cout << "Size of i : " << sizeof i << endl;
    cout << "Size of d : " << sizeof d << endl;
    cout << "Size of i + d : " << sizeof (i+d) << endl;

    cout << "Size of string' <New year!>: ";
    cout << sizeof "New Year!" << endl;

    cout << "Size of char : " << sizeof (char) << endl;
    cout << "Size of int : " << sizeof (int) << endl;
    cout << "Size of short int : " << sizeof (short int) << endl;
    cout << "Size of long int : " << sizeof (long int) << endl;
    cout << "Size of long long int : ";
    cout << sizeof ( long long int ) << endl;

    cout << "Size of float : " << sizeof (float) << endl;
    cout << "Size of double : " << sizeof (double) << endl;
    cout << "Size of long double : " << sizeof (long double) << endl;

    return 0;
}
