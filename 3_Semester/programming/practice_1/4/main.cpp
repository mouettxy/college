#include <iostream>

using namespace std;

int main()
{
    unsigned int P;
    cout << "P = ";
    cin >> P;

    unsigned int S = (P % 10 * 100) + (P / 10 % 10 * 10) + (P / 100);

    cout << "S = " << S << endl;

    return 0;
}
