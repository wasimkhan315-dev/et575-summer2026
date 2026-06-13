#include <iostream>
#include "lab15_function_wasim.cpp"
using namespace std;

int main(){
    cout << "\n ---- example 1: rcursive function" << endl;
    cheers(3);


    cout << "\n --- exampl 2: summation recursive" << endl;
    int s = summation(5);
    cout << s << endl;


    cout << "\n --- example 3: summation recursive function" << endl;
    int n = getpositive();
    cout << "collected number = " << n << endl;

    cout << "\n --- example 4: built in function" << endl;
    int s1 = getpositive();
    int s2 = getpositive();
    float h = hypotenuse(s1, s2);
    printresult(s1,s1,h)
    
    return 0

   }

    












    