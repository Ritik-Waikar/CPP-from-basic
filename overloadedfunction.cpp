#include <iostream>
using namespace std;
void bakepizza();
void bakepizza(string topping1);
void bakepizza(string topping1, string topping2);
int main(){
    bakepizza("cheese", "chicken");
    return 0;
}

void bakepizza(){
    cout << "here is your pizza";

}

void bakepizza(string topping1){
    cout << "here is your "<< topping1 << " pizza"<< endl;

}

void bakepizza(string topping1, string topping2){
    cout << "here is your "<< topping1 << " and " << topping2<< " pizza"<< endl;

}