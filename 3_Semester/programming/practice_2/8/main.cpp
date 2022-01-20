#include <iostream>

using namespace std;

int main()
{
    unsigned int D, R;

    cout << "Enter D" << endl;
    cin >> D;

    if (D < 32) {
        R = D % 7;

        switch (R)
        {
            case 1: cout << "Monday"   << endl; break;
            case 2: cout << "Tuesday"  << endl; break;
            case 3: cout << "Wednsday" << endl; break;
            case 4: cout << "Thursday" << endl; break;
            case 5: cout << "Friday"   << endl; break;
            case 6: cout << "Saturday" << endl; break;
            case 0: cout << "Sunday"   << endl; break;
        }
    }
    else
    {
        cout << "Error" << endl;
    }

    return 0;
}
