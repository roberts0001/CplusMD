#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char data[100];
    int sum = 0;

    cout << "Ievadiet simbolu virkni - ";
    cin.getline(data, 100);

    for (auto i: data){
        if (i == 'a'){
            sum++;
        }
    }
    cout << "Simbolu 'a' šajā virknē ir " << sum;

    return 0;
    
}