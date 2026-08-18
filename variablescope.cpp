#include <iostream>
using namespace std;
void printnum();
// global variables: these functions are declared outside the main function 
// simply its like the variables which are not inside curly braces are global variables
int num =3;  // this is a global variable
// avoid this because this pollute the global namespace 
// local variables are give more preference then this 

int main(){
    int num =2;
    printnum();
    cout << num << '\n';
    return 0;
}

void printnum(){
    int num = 1;
    cout << num << '\n';

}
//output is : 1
//            2

// the priority is given to the funtion made printnum and then the main but 
// global variable is nt  printed to print that we have to use scope resolution operator
// cout << :: num << '\n'  if we use this then global variable will be printed