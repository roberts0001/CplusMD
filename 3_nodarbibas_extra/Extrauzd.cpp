#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    bool cap = true;
    int choice, length;
    float MIN, MAX; 
    int numbers[10];
    char data[100], modifieddata[100];
    float *array = nullptr;
    float biggest, biggest2, biggest3, lowest, lowest2, lowest3;

    srand (time(NULL));

    while (true){
        cout << "\nIevadiet savu izvēli - ";
        cin >> choice;
        cin.ignore(); //iztukso input bufferi
        cout << endl;

        switch(choice){
            case 1: 
                for (int i = 0; i < 10; i++){
                    numbers[i] = rand() % 100; 
                    cout << numbers[i] << " ";

                    MIN = numbers[0];
                    MAX = numbers[0];

                    if (numbers[i] > MAX){
                        MAX = numbers[i];
                    }else if (numbers[i] < MIN){
                        MIN = numbers[i];
                    }
                }

                biggest = MAX, biggest2 = MIN, biggest3 = MIN;
                lowest = MIN, lowest2 = MAX, lowest3 = MAX;

                for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
                    if (numbers[i] > biggest){ //lielako skaitlu meklesana
                        biggest3 = biggest2;
                        biggest2 = biggest;
                        biggest = numbers[i];
                    } else if (numbers[i] < biggest && numbers[i] > biggest2){
                        biggest3 = biggest2;
                        biggest2 = numbers[i];
                    } else if (numbers[i] > biggest3 && numbers[i] < biggest && numbers[i] < biggest2){
                        biggest3 = numbers[i];
                    } 

                    if (numbers[i] < lowest){ //mazako skaitlu meklesana
                        lowest3 = lowest2;
                        lowest2 = lowest;
                        lowest = numbers[i];
                    } else if (numbers[i] > lowest && numbers[i] < lowest2){
                        lowest3 = lowest2;
                        lowest2 = numbers[i];
                    }else if (numbers[i] < lowest3 && numbers[i] > lowest && numbers[i] > lowest2){
                        lowest3 = numbers[i];
                    }   
                }

                cout << "\n3 lielakie skaitli ir " << biggest << ", " << biggest2 << ", " << biggest3;
                cout << "\n3 mazakie skaitli ir " << lowest << ", " << lowest2 << ", " << lowest3;
                cout << endl;
                break;
            case 2:
                cout << "Ievadiet cik elementus vadīsiet masīvā: ";
                cin >> length;
                cout << endl;

                if (length == 0){
                    cin.ignore();
                    break;
                }

                array = new float[length];
                cout << "Ievadiet šos " << length << " elementus: " << endl;

                for (int i = 0; i < length; i++){
                    cin >> array[i];

                    MIN = array[0];
                    MAX = array[0];

                    if (array[i] > MAX){
                        MAX = array[i];
                    }else if (array[i] < MIN){
                        MIN = array[i];
                    }
                }

                lowest = MIN, lowest2 = MAX, lowest3 = MAX;

                cout << "\nVeselie skaitļi ir ";
                for (int j = 0; j < length; j++){
                    if (floor(array[j]) == array[j]){
                        cout << array[j] << " "; 
                    }

                    if (array[j] < lowest){ //mazako skaitlu meklesana
                        lowest3 = lowest2;
                        lowest2 = lowest;
                        lowest = array[j];
                    } else if (array[j] > lowest && array[j] < lowest2){
                        lowest3 = lowest2;
                        lowest2 = array[j];
                    }else if (array[j] < lowest3 && array[j] > lowest && array[j] > lowest2){
                        lowest3 = array[j];
                    }
                }

                cout << "\n2. mazākais skaitlis šajā masīvā ir " << lowest2;

                delete[] array;
                cout << endl;
                break;
            case 3:
                cout << "Ievadiet simbolu virkni - ";
                cin.getline(data, 100);

                cout << "\nParveidota virkne: ";
                for (int i = 0; i < strlen(data); i++){
                    if (islower(data[i])){
                        modifieddata[i] = toupper(data[i]);
                        cout << modifieddata[i]; 
                    }else{
                        modifieddata[i] = tolower(data[i]);
                        cout << modifieddata[i];
                    }  
                
                }
                cout << endl;

                cout << "\nParveidota virkne 2: ";
                for (int i = 0; i < strlen(data); i++){
                    if (isalpha(data[i]) && cap == true){
                        data[i] = toupper(data[i]);
                        cout << data[i];
                        cap = false;
                    }else if (isspace(data[i])){
                        cout << " ";
                        cap = true;
                    }else {
                        cout << data[i];
                    }
                }
                
                cout << endl;
                break;
            case 4:
                cout << "Programma beidz darbību!" << endl;
                return 0;
            default: 
                cout << "Ievadīti nekorekti dati!!!" << endl;
                cout << endl;    
        }
    }
}
