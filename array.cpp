#include <iostream>
using namespace std;
int main(){
   // Data structure that can hold multiple values accessed by index numbers
   //string name = "Ritik";
   // this is a noermal string 
   //string name[] = {"ritik", "dnyanesh", "Vihwaa"};
   //this is an array now 
   //index starts from 0 .... Each element has an index number
   //it starts from 0 cuz computer starts always from 0.
   /*If we are declaring a variable first then we havve to 
   declare the size and then if we keep the square bracket empty then 
   it won't work
   string car[] ; .... this won't work we have to define the size too*/
   string car[3];
   car[0]= "Maruti";
   car[1]="mustang";
   car[2]="Ford";

   //now for displaying this we will not write each thing repeatadly
   //USE FOR LOOP

//    for(int i=0; i < sizeof(car)/sizeof(car[0]); i++){
//         cout << car[i] <<'\n';    
// }
/*here sizeof() this operator is used this is to get the size of the array 
it is mostly used in loop for getting number of elements*/
//FOR EACH LOOP
   for( string cars : car){
    cout << cars << '\n';

   }
    return 0;
}