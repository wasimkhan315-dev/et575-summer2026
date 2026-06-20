/*
Wasim Khan
June 17, 2026
Lab 17, array application
*/
#include <iostream>
#include "lab17_function_wasim.cpp"

using namespace std;

int main(){
    //declare size of the array
    const int sizea = 10;
    //delcare the array
    int a[sizea]= {0};
    // delcar the variable to save the last collected index
    int listsize;
    // declare the target number
    int targetnumber = 10;

    //calling function
    filluparray(a,listsize,sizea);
    printelements(a, listsize);
    int foundindex = search(a, listsize, targetnumber);
    cout << "Index of found number: " << foundindex << endl;

    //EXERCISE A
    int arr[10]={25,8,42,3,17,29,10,5,19,12};

    int minNumber = findmin(arr, 10);
    cout << "The minimum number is " << minNumber << endl;

    // EXERCISE B

    int arrayNumber2D[ARRAY_SIZE][ARRAY_SIZE] = {0};

    int max = 200;
    int min = 150;
    populatedArray2D(arrayNumber2D);

    int totalNumber = range2D(arrayNumber2D, min, max);

    cout << "\nArray has " << totalNumber << " number between " << min << " and " << max << endl;


    return 0;
}