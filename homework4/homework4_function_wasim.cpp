#include <iostream>
#include <cstdlib>
using namespace std;

bool isDuplicate(int arr[], int size, int value){
    for(int i = 0; i < size; i++){
        if(arr[i] == value){
            return true;
        }
    }
    return false;
}

void winningDigits(int win[]){
    for(int i = 0; i < 5; i++){
        do{
            win[i] = rand() % 19 + 1;
        }
        while(isDuplicate(win, i, win[i]));
    }
}

void userTicket(int user[]){
    for(int i = 0; i < 5; i++){
        do{
            cout << "Enter number " << i + 1
                 << " (1-19): ";
            cin >> user[i];
        }
        while(user[i] < 1 || user[i] >19 ||
              isDuplicate(user, i,user[i]));
    }
}

void checkDuplicates(int win[], int user[]){}

int checkWinner(int win[], int user[]){
    int matches = 0;

    for(int i = 0; i < 5; i++){
        if(win[i] == user[i]){
            matches++;
        }
    }

    return matches;
}

void printResult(int win[],int user[], int matches){
    cout << "\nwinning digits =";

    for(int i= 0; i < 5; i++){
        cout << "\t" << win[i];
    }

    cout << "user ticket = ";

    for(int i = 0; i < 5; i++){
        cout << "\t" << user[i];
    }

    cout << "Match numbers = \t" << matches << endl;
}