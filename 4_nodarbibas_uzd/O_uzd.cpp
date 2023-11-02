#include <iostream>

using namespace std;

int Sumofnumbers(int n) {
    if (n >= 1){
        return n + Sumofnumbers(n-1);
    }else {
        return 0;
    }
}

int main()
{
    int n, result;

    cout << "Ievadiet skaitli n: ";
    cin >> n;

    result = Sumofnumbers(n);
    cout << "Skaitļu summa intervālā no 1.." << n << " ir " << result;

    return 0;
    
}