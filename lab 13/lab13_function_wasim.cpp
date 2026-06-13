#include <iostream>
using namespace std;

// example 1 void function
// void function is a function that doesnt return a value

void printhi(){
    cout << "Hello Function!" << endl;
    return;
}

// example 2: void function with parameter
// Function that prints a name with a messag
void greeting(string username){
    cout << "Good Morning << username << endl";
}

// example 3: function that returns a value
// returns double of a number
// the number is passed to th function as arguement
int dbnumber(int n){
    return n*2;
}

// EXERCISE
int number;
int getnumber(){
    cout << "Enter a number in between 1 and 10: " << endl;
    cin >> number;
while(number < 1 || number> 10){
    cout << "Wrong Number Try again: ";
    cin >> number;
}
return number;
}

void printnumber(int number){
    for (int x = number; x<=15; x++){
        cout << x << " ";
    }
    cout << endl;
    return;

}
int countnumber(int number){
    int count = 0;
    for (int x = number; x<=15; x++){
        if (x%3 != 0){
            count++;
        }
    }
    return count;
}
void lastprint(int number, int count){
    cout << "from " << number << " to 15" << count << "numbers that arent multiples of 3";

    return ;

}
    

