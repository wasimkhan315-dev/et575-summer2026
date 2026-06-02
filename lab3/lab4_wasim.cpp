/*
Wasim Khan
June 1, 2026
Lab 4:
*/
#include <iostream>
using namespace std;

int main() {
    cout << "\nExample 1: Assignment Operator " << endl;
    int n = 9, m = 2;
    cout << "n = " << n << endl;
    
    // add 1 to update value
    n++;
    cout << "updated n = " << n << endl;

    // Subtract 1 from m and update value
    m--;
    cout << "updated m = " << m << endl;

    // add m to n and update n
    n += m;
    cout << "Updated n = " << n << endl;

    // triple value of m and update m
    m +=3 ; 
    cout << "updated m = " << m << endl;

    // modulus: find and return remainder of division
    cout << "Modulus, Remainder = " << n%m << endl;
    n%m;
    cout << "n = " << n << endl;


    cout << "\nExample 2: Comparison Operators " << endl;
    cout << "n = " << n << endl;
    cout << "m = " << m << endl;
    cout << "Are n and m equal?    " << (n==m) << endl;
    cout << "IS n not equal to m? "   << (n != m) << endl;
    cout << "Is m greater than or equal to n?"    << (m >= n) << endl;

    cout << "\n Example 3: Logical Boolean Operators" << endl;
    // AND operator && returns if ALL statemrnts are true
    // OR operator || Only returns if ONE statment is true
    // NOT ! returns a TRUE statement is false
    bool check1 = m < n;
    bool check2 = n <= m;
    bool check3 = m != n;

    cout << "Check 1 = " << check1 << endl;
    cout << "Check 2 = " << check2 << endl;
    cout << "Check 3 = " << check3 << endl;
     
    bool result1 = check1 && check2 && check3;
    bool result2 = check1 || check2 || check3;
    bool result3 = ! check2;

    cout << "\n Exercise" << endl;

    // declare variables: number and charcater
    int x, y;
   





    // collect values for the character and the number 
      x = 2, y = 3;


    // triple the number (assignment operator)
    cout << "The number two tripled is " << (x * 3) << endl;
    cout << "The number three tripled is " << (y * 3) << endl;


    //print result
    cout << "The number two tripled is " << (x * 3) << endl;
    cout << "The number three tripled is " << (y * 3) << endl;



    // remainder of character divided by 60 (assignment operator)
    (x % 60);
    cout << "The remainder is " << x << endl;


    // print result
    cout << "The remainder is " << x << endl;

    // if number is less than or equal to character(comparison operator)
    bool check4 = (2==x);


    // print results
    cout << check4 << endl;

    // is number between -2 and 2 (comparison and boolean operator)
    bool check5 = (x >= -2) || (x >= 2);


    // print result
    cout << check5 << endl;





    return 0;
}