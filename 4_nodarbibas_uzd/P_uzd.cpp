#include <iostream>
#include <cstring>

using namespace std;

void Backword(char data[], int n){
    int start = 0;
    int end = n - 1;

    while (start < end){
        char temp = data[start];
        data[start] = data[end];
        data[end] = temp;

        start++;
        end--;
    }
} 

int main()
{
    int length;
    char text[100];

    cout << "Ievadiet simbolu virkni: ";
    cin.get(text, 100);

    length = strlen(text);

    Backword(text, length);
    for(char i: text){
        cout << i;
    }

    return 0;
    
}
