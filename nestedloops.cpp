#include <iostream>
using namespace std;

int main (){
    // loop is a loop mostly used for pattern printing like 2 loops are working a same time

    int row;
    int column;
    char symbol;

    cout << "Enter number to rows to be printed" << endl;
    cin >> row;

    cout << "Enter number to columns to be printed" << endl;
    cin >> column;

    cout << "Enter Symbol to be printed" << endl;
    cin >> symbol;

    for(int i=1; i<=row ; i++){
        for(int j=1; j<=column ; j++){
            cout << symbol;
        }
        cout << '\n';
    }

    return 0;
}