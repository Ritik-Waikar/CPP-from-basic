#include <iostream>
using namespace std;
// cout << (insertion operator)
// cin >> (extracction operator)

int main(){
    string name;
    int age;
    cout <<"Enter your name";
    // cin >> name; <--- now this wont take my full name as input for thatt we use getline function
    getline(cin >> ws, name);   
    /*we used >> ws to remove he whitespace or naew line character which we dont want
    like if i put the age read above this then i would get error cuz the compiler reads the new line character 
    which we dont want it comes by default so to clear it we use this */

    cout << "Enter your age";
    cin >> age;

    cout << "hello" << name << '\n';
    cout << "Your age is" << age << endl;
    return 0;
}