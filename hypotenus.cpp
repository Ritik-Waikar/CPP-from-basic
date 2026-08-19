#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a;
    double b;
    double d;
    cout << "Enter side a" << endl;
    cin >> a;
    cout << "Enter side b" << endl;
    cin >> b;

    // a = pow(a, 2);
    // b = pow(b, 2);
    d = sqrt(pow(a, 2)+pow(b, 2));

    cout << "Side d is "<< d << endl;
    return 0;
}