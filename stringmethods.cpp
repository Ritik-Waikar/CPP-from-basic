#include <iostream>
using namespace std;

int main(){
    string name;
    cout << "Enter your name" << '\n';
    getline(cin,name);
    if(name.length() > 12){   //this operator tell the length of string 
        cout << "Name too big" << '\n';
    }
    else {
        cout<<"hello "<< name <<'\n';
    }


     if(name.empty()){   //this operator tell whether string is empty or not 
        cout << "You have not written your name" << '\n';
    }
    else {
        cout<<"hello "<< name <<'\n';
    }


    name.append("@gmail.com");
    cout << "Username = " << name <<'\n';
    
    return 0;
}