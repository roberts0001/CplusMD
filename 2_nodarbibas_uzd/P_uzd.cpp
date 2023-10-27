#include <iostream>

using namespace std;

int main()
{
    int sk;
    cout << "Ievadiet skaitli: ";
    cin >> sk;
    cout << endl;

    if (sk > 1){
        if ((sk % 2) && (sk % 3)){
            cout << "Skaitlis " << sk << " ir pirmskaitlis.";
        }
        else if (sk == 2 || sk == 3){
            cout << "Skaitlis " << sk << " ir pirmskaitlis.";
        } 
        else {
        cout << "Skaitlis " << sk << " nav pirmskaitlis!";
        }
    }else{
        cout << "Skaitlis " << sk << " nav pirmskaitlis!";
    }
}