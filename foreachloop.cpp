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


    return 0;
}