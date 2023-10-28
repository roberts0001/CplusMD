#include <iostream>
#include <stdlib.h> // lai strādātu srand, rand

using namespace std;

int main()
{
    int numbers[10];
    float sum = 0;
    srand (time(NULL));

    for (int i = 0; i < 10; i++){
        numbers[i] = rand() % 100; //aizpilda ar random
        sum += numbers[i];
        cout << numbers[i] << " ";
    }

    cout << "\nMasīva vidējā vērtība ir " << sum / 10;
    return 0;
    
}