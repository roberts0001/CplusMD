#include <iostream>
#include <cstring>

using namespace std;

void Backword(char data[]){
    for (int i = strlen(data); i >= 0; i--){
        cout << data[i];
    }
} 

int main()
{
    char text[100];

    cout << "Ievadiet simbolu virkni: ";
    cin.get(text, 100);

    Backword(text);

    return 0;
    
}