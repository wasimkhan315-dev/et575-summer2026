/*
Wasim Khan
JUne 16, 2026 
Lab 16 Intro array
*/
#include <iostream>
#include "lab16_function_wasim.cpp"
using namespace std;

int main(){
      // exercise A
cout << "\n --- example 1: intro to pointer\n" << endl;

      intropointer();

cout << "\n example 2: checking different" << endl;
string something = "Hello World!";
a(something);
b(something);
c(&something);

cout << "\n exercise" << endl;

int* ptr; // declare pointer ( ptr holds value)
int var = 7; // assign a value
int foo = 21; // declare new variable ; holds 21
ptr = &var; // places var address inside pointer
ptr = &foo; // places foo inside pointer
int& ref = var; // gives a new way to call 


// EXERCISE B
#include <cstdlib>
#include <ctime>
void fillArray(int arr[], int size);
int countEvenNumbers(int arr[], int size);
srand(time(0));
const int SIZE = 10;
int num[SIZE];
fillArray(num, SIZE);

cout << "Array: ";
for(int i = 0; i <SIZE; i++){
      cout << num[i] << " ";
}
cout << endl;
cout << "Number of even numbers: " << countEvenNumbers(num, SIZE) << endl;

    return 0;
}