#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <list>

using namespace std;

void inputVector(vector<int>&, int);
void printQueue(vector<int>, queue<int>&);
void printStack(vector<int>, stack<int>&);
void printList(vector<int>, list<int>&);
void printVector(vector<int>);

enum Choices { Input = 1, Row = 2, Stack = 3, STLcontainer = 4, Numbers = 5, Finish = 6};

int main()
{
    int choice, number;

    vector<int> numVector = {4, 5, 6, 7, 8};
    queue<int> numQueue;
    stack<int> numStack;
    list<int> numList;

    cout << "--- Šī C++ programma veic sekojošās darbības ---" << endl;
    cout << "1. Ievadīt skaitļus\n2. Rinda\n3. Steks\n4. Saraksts\n5. Izvada skaitļu virkni\n6. Beigt darbību" << endl;
    cout << endl;

    while (choice != 6){
        cout << "\nIevadiet savu izvēli - ";
        cin >> choice;
        
        cin.ignore(); //iztukso input bufferi
        cout << endl;

        switch(choice){
            case Input:
                cout << "Ievadiet elementus vektorā: " << endl;

                inputVector(numVector, number);

                cout << endl;
                break;
            case Row:
                cout << "Iegūtā rinda ir: " << endl;
                printQueue(numVector, numQueue);

                cout << endl;
                break;
            case Stack:
                cout << "Iegūtā steka ir: " << endl;
                printStack(numVector, numStack);

                cout << endl;
                break;
            case STLcontainer:
                cout << "Iegūtais list ir: " << endl;
                printList(numVector, numList);

                cout << endl;
                break;
            case Numbers:
                cout << "Vektorā uzglabātie skaitļi ir: " << endl;
                printVector(numVector);

                cout << endl;
                break;
            case Finish:
                cout << "Programma beidz darbību!" << endl;
                return 0;
            default: 
                cout << "Ievadīti nekorekti dati!!!" << endl;
                cout << endl;    
        }
    }
}

void inputVector(vector<int>& numVector, int number){
    numVector.erase(numVector.begin(), numVector.end());

    while (cin >> number){
        numVector.push_back(number);
    }
    cin.clear();
    cin.ignore();
}

void printQueue(vector<int> numVector, queue<int>& numQueue){
    for(const auto& i: numVector){
        numQueue.push(i);
    }

    while (!numQueue.empty()){
        cout << numQueue.front() << ' ';
        numQueue.pop();
    }
}

void printStack(vector<int> numVector, stack<int>& numStack){
    for(const auto& i: numVector){
        numStack.push(i);
    }

    while (!numStack.empty()){
        cout << numStack.top() << ' ';
        numStack.pop();
    }
}

void printList(vector<int> numVector, list<int>& numList){
    numList.clear();
    
    for(const auto& i: numVector){
        numList.push_back(i);
    }

    for(auto i: numList){
        cout << i << " ";
    }
}

void printVector(vector<int> numVector){
    for(auto element: numVector){
        cout << element << " ";
    }
}