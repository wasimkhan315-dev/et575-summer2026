/*
Wasim Khan
Homework 2
*/
#include <iostream>
using namespace std;
const int DIMENSION = 10;

int main(){
    cout << "\nQuestion 1\n" << endl;

int num;
do{
    cout << "Enter a number greater than or equal to 10: " << endl;
    cin>>num;

    if (num <10){
        cout << num << "isnt valid. Enter a number again: " << endl;
    }

} while(num<10);
cout << num << " is valid." << endl;


cout << "\nQuestion 2\n" << endl;
int num1, num2;
int min, max;
cout << "Enter number 1: ";
cin>>num1;
cout << "Enter number 2: ";
cin >> num2;

if(num1 < num2){
    min = num1;
    max = num2;
}
else{
    min =num2;
    max = num1;
}
cout << "RESULT =";
while(min<=max){
    cout << min << " ";
    min++;
}
cout << endl;

cout << "\nQuestion 3\n" << endl;

for(int row =1; row < DIMENSION; row++){
    for(int col = 1; col<DIMENSION; col++){
        if ((col==3 && row==4) ||
            (col==3 && row==5) ||
            (col==4 && row==3) ||
            (col==4 && row==4) ||
            (col==4 && row==5) ||
            (col==4 && row==6) ||
            (col==5 && row==4) ||
            (col==5 && row==5) ||
            (col==5 && row==6))
    {
        cout << " % ";
    }
    else{
        cout << " . ";
    }

    }
    cout << endl;
}



return 0;

}

