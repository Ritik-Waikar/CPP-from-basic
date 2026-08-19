#include <iostream>
#include <vector> // this header file is to be used
using namespace std;

// typedef std::string text_t; 
using text_t = std::string; // this syntax is of keyword "using" use this instead of typedef.
// typedef is used to make the datatype a small/shortcut

// instead of using typedef we use the "using" keyword because it helps in
int main(){
    text_t firstname = "RITIK";
    cout << firstname << "\n";
    return 0;
}