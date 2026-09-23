#include <iostream>
 
double getTotal(double prices[], int size);
 
int main()
{
   double prices[] = {49.99, 15.05, 75, 9.99};
   int size = sizeof(prices)/sizeof(prices[0]);
   double total = getTotal(prices, size); //here while declaring array no need to add set of square brackets
 
   std::cout << "The total is: $" << total;

   return 0;
}
double getTotal(double prices[], int size) // here set of square baackets are required 
// we change the name if we want to of the array 
{
    double total = 0;              
    
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
 
    return total;
}