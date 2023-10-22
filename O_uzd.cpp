#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    cout << "Ievadiet skatili n: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        if (i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }

    cout << endl;
    cout << "Summa no skaitļiem, kuri dalās ar 3 vai 5, intervālā no 1.."<< n << " ir " << sum;

}