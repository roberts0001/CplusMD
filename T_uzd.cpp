#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num, interval;
    cout << "Ievadiet skaitli: ";
    cin >> num;
    cout << "Ievadiet intervālu: ";
    cin >> interval;
    cout << endl;

    for (int k = 1; k <= interval; k++){
        cout << num << setw(5) << " * " << setw(3) << k << setw(5) << " = " << setw(4) << num * k << endl;
    }

    return 0;

}