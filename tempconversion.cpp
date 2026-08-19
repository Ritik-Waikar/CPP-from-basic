#include <iostream>
using namespace std;

int main(){
    char unit;
    double temp;

    cout << "*******TEMPERATURE CONVERTER******* \n";
    
    cout << "Please select the type you want to convert \n";
    cout << "F = Farenhiet\n";
    cout << "C = celsius\n";
    cin >> unit;

    if(unit == 'F' || unit == 'f' ){
    cout << "Enter temperature in celcius " << '\n';
    cin >> temp;
    temp = (1.8*temp) + 32.0;
    cout << "The temperature is : "<< temp << "F" << endl;
    }

    else if(unit == 'C' || unit == 'c'){
    cout << "Enter temperature in Farenhiet " << '\n';
    cin >> temp;
    temp = (temp - 32)/1.8;
    cout << "The temperature is : "<< temp << "C" << endl;
    }
    
    cout << "***********************************";
    return 0;
}