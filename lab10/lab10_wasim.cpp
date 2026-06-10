/*
Wasim Khan
June 9, 2026
Lab 10

*/
#include <iostream>
using namespace std;

int main() {
    cout << "\n --- example 1: for loop as counter" << endl;

    for(int x = 1 ; x <= 5; x++){
        cout << "Hello " << endl;

    }
    cout << "End of for loop, Value of x = " << endl;

cout << "\n --- example 2: for loo[ as a counter with different steps" << endl;
// print from 1 to 9 step 
for(int x = 1; x<=9 ; x+=2){
    cout << x << "\t";

}
cout << "\n --- example 3: for loop as a decrement counter wuth different steps" << endl;
// print from 10 to -10 step 3 ---> 10 7 4 1 -2 -5 -8
for(int x = 10; x>=-10; x-=3){
    cout << x << "\t";
}
cout << endl;


cout << "\n --- example 4: for lopps with conditional statements << endl";
// count the numbers that are multiplied of 5 between -20 and 20 step 4
int counter = 0;
for(int x = -20; x<=20 ; x+=4){
    cout << x << "\t";
    if(x%5==0)
    counter++;

}
cout << endl << "numbers that are multiplied of 5 = " << counter << endl;

cout << "\n --- example 5: while loop as a counter" << endl;
// while loop to print from 1 to 5, inclusive
int n =1;
while(n<=5){
    cout << n << "\t";
    n++;
}
cout << endl;

n = 1;
while(n++ <=5){
    cout << n << "\t";

}
n = 1;
while(++n <=5){
    cout << n << "\t";

}
cout << "\n --- example 6: while loop to validate an input" << endl;
// while loop to recollect a number
// accept numbers between 1 and 9
int number = 0;
cout << "Enter a number: ";
cin >> number;

// while loop to recollect a number that is not between 1 and 9
while(!(number>=1 && number <=9)){
    cout << "Enter a new number between 1 and 9: ";
    cin >> number;

}

cout << "Collected number = " << endl;

cout << "\n --- EXERCISE 1 --- " << endl;

int count = 0;
cout << "Values: " << endl;
for(int i=21; i>= -21; i-= 5){
    cout << i << endl;
    if(i % 2==0);
    
}
count++;


cout << "\nNUmber of Multiples of 2: " << count << endl;



cout << "\n --- EXERCISE 2 --- " << endl;
int startingValue;
cout << "Enter the starting value: ";
cin >> startingValue;

cout << "\nLoop Value: " << endl;
for( int i = startingValue; i <= 30; i += 4){
    cout << i << endl;
    
}






return 0;
}
