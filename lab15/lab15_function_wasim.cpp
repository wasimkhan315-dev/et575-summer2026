/*
Wasim Khan
June 11, 2016 
Lab 15: recursive function ,built function
*/

#include <iostream>
using namespace std;
//example 1 : recursive function
// function calls itself during the program

void cheers(int n){
    //base case
    if (n == 0){
        cout << "STOP" << endl;

    }
    // recusrsive case
    else{
        cout << (n*2) << "\t";
        cheers(n-1);


    }
}
/*
function      |    int n    |   if(n==1)    |                    else
iteration     |             |               |   cout << (n*2).    | cheers(n-1)
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
1             |   n=3       |    false      | cout << (3*2)=6     | cheers(3-1=2)
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
2


*/


// example 2 : recursive to find the summation of a number
// for example, summation of 3, 3+2+1=0

int summation(int n){
    // recursive case
    if(n != 0){
        return(summation(n-1) + n);

    }
    // base case
    else{
        return 0;
    }
}

// exxampe 3: use recusrive function to validate a number
// use recursive case to recollect number if not positive

int getpositive(){
    int num;

    cout << "Enter a number ";
    cin >> num;

    // base case
    if(num >0)
    return num;

    // recursive case
    else 
    return getpositive();

}

// exmaple 4: built in function
// program to calculate hypotense
// function to calculate the hypotenuse
