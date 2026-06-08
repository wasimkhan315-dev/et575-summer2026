/*
Wasim khan
June 4, 2026
Lab9
*/

#include <iostream> 
using namespace std;
int main () {
// declare variables

int dayoff = 0;

// collect dayoff
cout << "1 for Monday"<<endl;
cout << "2 for Tueday" << endl;
cout << "3 for Wednesday" << endl;
cout << "4 for Thursday" << endl;
cout << "5 for Friday" << endl;

// switch case statement
switch (dayoff)
{
    case 1:
    cout << "You are off Monday" << endl;
    break;
    case 2:
    cout << " You are off Tuesday" << endl;
    break;
    case 3:
    cout << " You are off Wednesday" << endl;
    break;
    case 4: 
    cout << " You are off Thursday" << endl;
    break;
    case 5: 
    cout << "You are off Friday" << endl;
    break;
    default:
    cout << "wrong dayoff!" << endl;


}

cout << "\n --- example 2: select a gender" << endl;
// seclect gender using character
// declare
char gender;
string selectedgender = "";

// collect gender
cout << "Select a gender";
cout << "m for male" << endl;
cout << "f for female" << endl;
cout << "o for other" << endl;
cin>> gender;

//swith case
switch( gender)
{
    case 'm': case 'M':
    selectedgender = "MALE";
    break;
    case 'f' : case 'F':
    selectedgender = "FEMALE";
    break;
    case 'o' : case 'O':
    selectedgender = "OTHER";
    default:
    selectedgender = "UNKNOWN";
    break;

}

cout << "Lab 9 Exercise" << endl;
int num;
char choice;

// User inputs number
cout << "Type a number: ";
cin >> num;

// ask user to double num
cout << "Do you want to double the number? ";
cin >> choice;

// Choices
switch (choice)
{
    case 'Y': case 'y' : num *= 2;
    break;
    case 'N' : case 'n' :
    break;
    default: num = 0;


}
// Print
cout << "The number is set to " << num << endl;





    return 0;

}