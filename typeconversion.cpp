#include <iostream>
using namespace std;
// conversion of one data typr to another 
/* We use this at time of integer divison 
lie if there is int ata type in divide we convert it to double to get correct answer because 
if we keep it same then while calculating the answer it wont use the digits after decimal*/
int main(){

    int a=4;
    int b=9;
    // double sum = a/b *100; <-- this will give answer 0% cuz int didn't take the numbers after decimal.
    double sum = a/(double)b *100 ; // this gives the correc answer
    cout << sum << "%"<< endl;
    

    return 0;
}
