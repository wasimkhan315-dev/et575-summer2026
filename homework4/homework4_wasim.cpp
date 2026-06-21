#include <iostream>
#include <cstdlib>
#include <ctime>
#include "homework4_function_wasim.cpp"

using namespace std;

int main(){
    srand(time(0));
    int winning[5];
    int ticket[5];

    winningDigits(winning);
    userTicket(ticket);
    checkDuplicates(winning , ticket);
    int matches = checkWinner(winning, ticket);
    printResult(winning, ticket, matches);

     return 0;
}

