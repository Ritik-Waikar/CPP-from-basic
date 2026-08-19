#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int num;
    int tries=0;
    int guess;

    srand(time(NULL));

    num = rand() % 50 +1;
    cout << "********Number Guessing game******** "<< endl;
    do{
        cout<< "Guess the number "<< endl;
        cin>> guess;
        tries++;
        if(guess < num){
            cout<< "Number too low" << endl;
        }
        else if(guess > num){
            cout << "Number too high"<< endl;
        }
        else{
            cout<< "CORRECT!" << endl;
        }
        
    }while(guess != num);

    cout << "You took "<< tries << " to guess" << endl;
    cout << "******************************";
    
    return 0;
}