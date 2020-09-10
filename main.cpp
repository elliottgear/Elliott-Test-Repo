//
// Created by Elliott Gear on 9/10/20.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "This is an example program" << endl;
    int number = 1;
    while (number < 10){
        cout << "The number is less than 10" << endl;
        ++number;
    }
    return 0;
    int number = 1;
    while (number < 10){
        cout << "The number is less than 10" << endl;
        ++number;
    }

    string message = "";
    cout << "End a message: " << endl;
    getline(cin, message);
    cout << "Your message has been saved" << endl;


    return 0;
}