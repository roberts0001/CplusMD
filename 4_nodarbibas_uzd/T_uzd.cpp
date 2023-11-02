#include <iostream>

using namespace std;

void Print(int value){
    cout << "INT vērtība: " << value << endl;
} 

void Print(string value){
    cout << "STRING vērtība: " << value << endl;
} 

void Print(double value){
    cout << "DOUBLE vērtība: " << value << endl;
} 

void Print(char value){
    cout << "CHAR vērtība: " << value << endl;
} 

int main()
{
    Print(2);
    Print("divi komats divi");
    Print(2.2);
    Print('D');

    return 0;
    
}