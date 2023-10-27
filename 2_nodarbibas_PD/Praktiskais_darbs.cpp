#include <iostream>
#include <string>

using namespace std;

int main()
{
    string teksts = "Programmas ir jaraksta cilvekiem, kas tas lasis!";
    int choice, num, length, sum, factorial;

    cout << "--- Šī C++ programma veic sekojošās darbības ---" << endl;
    cout << "1. Ievadīt jaunu tekstu (parastie burti)\n2. Pasaka vai ievadītā teksta garums ir pāra vai nepāra skaitlis\n3. Izvada summu no 1..n (kur n = teksta garums)\n4. Atrod faktoriāli n (kur n = teksta garums)\n5. Izvada virkni no otrā gala (reversā)\n6. Beigt darbību" << endl;
    cout << endl;

    while (choice != 6){

    cout << "\nIevadiet savu izvēli - ";
    cin >> choice;
    cin.ignore(); //iztukso input bufferi
    cout << endl;

    if(cin.fail()){
        cin.clear(); //notira error flag
        cin.ignore();
        continue;
    }

    switch(choice){
        case 1:
            cout << "Ievadiet jauno tekstu: ";
            getline(cin, teksts); //nolasa rindinu
            cout << endl;
            break;
        case 2:
            length = 0;
            for (auto i: teksts){ //izrekina garumu
                length++;
            }

            if (length % 2 == 0){
                cout << "Ievadītā teksta garums ir pāra skaitlis (" << length << ")" <<  endl;
            }else {
                cout << "Ievadītā teksta garums ir nepāra skaitlis (" << length << ")" <<  endl;                
            }
            
            cout << endl;
            break;
        case 3:
        //ja lietotajs nav ieprieks pieprasijis case 2
            length = 0;
            for (auto i: teksts){
                length++;
            }

            sum = 0;
            for (int j = 1; j <= length; j++){
                sum += j;
            }
            cout << "Summa no 1.." << length << " (kur n ir teksta garums) ir " << sum << endl;
            cout << endl;
            break;
        case 4:
        //ja lietotajs nav ieprieks pieprasijis case 2
            length = 0;
            for (auto i: teksts){
                length++;
            }

            num = length;
            factorial = 1;
        
            cout << "Faktoriāls no " << num;

            while (num > 0){
                factorial *= num;
                num--;
            }

            cout << " = " << factorial << endl;
            cout << endl;
            break;
        case 5:
        //ja lietotajs nav ieprieks pieprasijis case 2
        length = 0;
            for (auto i: teksts){
                length++;
            }

            for (int j = length; j >= 0; j--){
                cout << teksts[j];
            }
            
            cout << endl;
            break;
        case 6:
            cout << "Programma beidz darbību!" << endl;
            return 0;
        default: 
            cout << "Ievadīti nekorekti dati!!!" << endl;
            cout << endl;    
    }
    }
}
