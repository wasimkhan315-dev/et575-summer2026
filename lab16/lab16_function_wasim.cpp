/*
Wasim Khan
June 16, 2026
Lab 16 array intro
*/
#include <iostream>
using namespace std;
// exercise A
void intropointer(){
    int num = 12;
    char sym = '#';
    string n = "Peter";

    // declare pointer with initial value
    int* ptrint;
    char* ptrchar;
    string* ptrstring = &n;

    // check pointer info
    cout << ptrint << endl;

    // initialize a pointer with variable location
    ptrint = &num;
    ptrchar = &sym;

    // check pointers
    cout << ptrint << endl;
    cout << ptrchar << endl;
    cout << ptrstring << endl;
    
    // get the value of a pointed variable
    cout << *ptrint<< endl;
    cout << *ptrchar<< endl;
    cout << *ptrstring<< endl;
}

// example 2
void a(string v){
    cout << "A = " << v << endl;
}
void b(string& v){
    cout <<"B = " << v << endl;
}
void c(string* v){
    cout << "C = " << v << endl;
}


// EXERCISE B 
void fillArray(int arr[], int size){
      for(int i = 0; i < size; i++){
        arr[i] == rand() % 9 + 1;
      }
}
  
int countevennumber(int arr[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if (arr[1]%2 == 0){
            count++;
        }
    }
    return count;
}

