#include<iostream>
#include<ctime>  // this library tis for execution of random numbers
using namespace std;

int main(){

    //for initializing we use the srand() in parenthesis the seed comes
    //IF WE DONT USE THIS THE THE HIGHEST VALUE we wrote in the range only that is printed
    //Calling srand(seed) changes the starting point of the sequence, 
    //so different seeds produce different sequences of numbers.
    srand(time(NULL));

    int num;
    // rand() % this the range highest number and + 1 is for getting range from 1 to highestnumber 
    // or else we get range from 0 to n-1
    num = (rand() % 6 + 1) ;
    cout << num;

    return 0;
}