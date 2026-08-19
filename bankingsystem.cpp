#include <iostream>
#include <iomanip>
/* this header file used to add recesion to the double number like after decimal point how many
decimal should be shown can be controlled by it */
using namespace std;

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance=0;
    int choice;
   
    do
    {
    cout << "************************" << '\n';
    cout << "BANKING SYSTEM" << '\n';
    cout << "************************" << '\n';
    cout << "1. Display balance" << '\n';
    cout << "2. Deposit money" << '\n';
    cout << "3. Withdraw money" << '\n';
    cout << "4. Exit" << '\n';
    cin >> choice;

    switch(choice){
        case 1: 
            showbalance(balance);
            break;
        case 2:
            balance += deposit();
            cout << "your Balance is "<< setprecision(2) << fixed << balance << '\n';
            break;
        case 3:  
            balance -= withdraw(balance);
            cout << "your Balance is "<< setprecision(2) << fixed << balance << '\n';
            break;
        case 4:
            cout << "Thankyou for Visiting" << '\n';
            break;
        default: 
            cout<< "Invalid choice" << '\n';    
        
    }

    } while (choice<4);
    
    return 0;
}

void showbalance(double balance){
    cout << "your Balance is "<< setprecision(2) << fixed << balance << '\n';
//now balance is set to 0 and after 0 and decimal point 2 zero are printed this is cuz of setprecision we set it to 2
}
double deposit(){
    double amount;
    cout << "Enter amount ot be deposited "<< '\n';
    cin >> amount;
    // now to avoid negative alance we will use if else statements
    if(amount > 0){
        return amount;
    }
    else{
        cout << "Enter valid amount" <<'\n';
        return 0;
    }
}
double withdraw(double balance){
    double amount ;

    cout << "Enter AMount to  withdraw " <<'\n';
    cin>> amount;

    if(amount > balance){
        cout << " Amount insufficient" << '\n';
        return 0;
    }
    else if(amount < 0 ){
        cout << "Enter valid amount" << '\n';
        return 0;
    }
    else{
        return amount;
    }

}