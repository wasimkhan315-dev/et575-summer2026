/*
Wasim Khan
Lab 17 and 18 console failure and  file streaming
*/
#include <iostream>
#include "lab18_function_wasim.cpp"

using namespace std;

int main(){ 
    cout << " \n example 1:console failure test " << endl;
    checknumber();

    cout << "\n example 2: console failure test" << endl;
    float n = validatenumber();
    cout << n << endl;


    // EXERCISE 1
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    double result = calc(num1 ,num2);
    cout << " result is " << result << endl;

    // EXERCISE 2
    createFile();
    appendFile("This line is appended to file. ");
    overwriteFile("newfilw.txt", "This overwrites the info in the file");
    cout << " Operation finished." << endl;




    return 0;
} 