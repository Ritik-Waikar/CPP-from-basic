#include <iostream>
using namespace std;

int main(){
    // for each loop is to shorten the iterating array 
    // it is a loop that eases the process of iterating through an array or a collection of elements
    // it is less flexible 
    int grades[] = {10, 20, 30, 40, 50};
    for(int grade : grades){
        cout << grade << '\n';
    // for every grade in grades lets display each grade 
    }
    // this is used to shorten the basic iteration loop but go with basics 
    // this is less flexible because we cannot access the index of the array in this loop
    for(int i = 0; i < sizeof(grades)/sizeof(grades[0]); i++){
        cout << grades[i] << '\n';
    }
// this is the basic for loop which is more flexible because we can access the index of the array in this loop
    return 0;
}