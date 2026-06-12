/*
Wasim Khan
JUne 10, 2026
Lab 12 : nested loops
*/
#include <iostream>
using namespace std;

int main(){
    cout << "\n --- example 1 : nested loops" << endl;
    // one run of gthe outer loop will have one complete cycle of the loop
    int i = 0;
    while(i++ <3){
        cout << "OUTER LOOP" << endl;
        // inner loop, print from 1 to 5
        cout << "\t\t INNER LOOP" << endl;
        int j = 0;
        while(j++ < 5){
            cout << "\t" << j;
        }
        cout << endl;
    }

    cout << "\n example 2: nested for loop" << endl;
    // cinema seats arrangements
    // row and seats per low ( column )
    int row = 0, seats = 0;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of seats per row: ";
    cin >> seats;
    for (int r = 1; r<=row; r++){
        for(int c = 1; c<= seats; c++){
            cout << "Row " << r << " seat " << c << "\t";
        }
        cout << endl;
    }

    cout << "\n example 3: graphing using nested loops " << endl;
    const int GRAPHSIZE = 9;
    for(int row = 1; row<=GRAPHSIZE; row++){
        for(int col = 1; col <= GRAPHSIZE; col++){
            if(col==5)
               cout << " x " ;
               else
                   cout << " . ";
        }
        cout << endl;
    }

    cout << "\n example 4: graphing H using nested loops " << endl;
    int dimension = 10;
    for(int row = 1; row<=dimension; row++){
        for (int col = 1; col<=dimension; col++){
        if( (row>=3 && row<=8 && col>=3 && col<=4))
        cout << "%";
        else
        cout << " . ";

        
    }
    cout << endl;

}

cout << "\n EXERCISE 1 " << endl;

const int guess = 5;
int num;
 cout << "Enter number" << endl;
 cin>> num;
 if(num<1 || num>10){
    cout << "Enter number in between 1 and 10: " << endl;

 }
 else
    if(num>guess){
        cout << "The number is higher than the guuess" << endl;
    }
    else if(num<guess){
        cout << "The number is lower than the guess " << endl;

    }
    else 
    cout << "BINGO" << endl;


    cout << "\n EXERCISE B" << endl;
    int x;
    int y;
     

    for (x=1; x<=10; x++){
        for( y=1;y<=10; y++){
            cout << " % ";
        }
        cout << endl;
    }
    cout << endl;

    
 




    return 0;
}