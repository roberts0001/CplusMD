#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int sk, i;
    cout << "Ievadiet skaitli: ";
    cin >> sk;
    cout << "Ievadiet intervālu: ";
    cin >> i;
    cout << endl;

    for (int k = 1; k <= i; k++){
        cout << sk << setw(5) << " * " << setw(3) << k << setw(5) << " = " << setw(4) << sk * k << endl;
    }

    return 0;

}