/*
Wasim Khan
June 10, 2026
:ab 13: introduction to functions
*/

#include <iostream>
#include "lab13_function_wasim.cpp"

using namespace std;

int main(){
    cout << "\n example 1: void function" << endl;
    printhi();
    printhi();
    printhi();

    cout << "\n example 2: void function" << endl;
    greeting("Peter");
    string user = "Annie";
    greeting(user);



    cout << "EXERCISE " << endl;
    int number;
    int answer;
    number=getnumber();
    printnumber(number);
    answer =countnumber(number);
    lastprint(number, answer);
    

    





    return 0;
}
   

