#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Enter = ";
    cin >> a;

    int first_number = a / 10;
    int second_number = a % 10;
    int result = first_number + second_number;

    cout << "Result = " << result << endl;

    return 0;
}
