/*
Wasim Khan
Lab 6 Exercise
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare string variable
    string new_word;

    // Ask the user to enter a word
    cout << "Enter a word: ";
    cin >> new_word;

    // Print the 4th character
    cout << "The 4th character is: " << new_word[3] << endl;

    // Print the length of the word
    cout << "The length of the word is: " << new_word.length() << endl;

    // Replace 3 characters starting from the 2nd character
    new_word.replace(1, 3, "--$--");

    // Print resulting word
    cout << "After replacement: " << new_word << endl;

    // Remove 2 characters from the end
    new_word.erase(new_word.length() - 2, 2);

    // Print resulting word
    cout << "After removing 2 characters from the end: "
         << new_word << endl;

    return 0;
}


/*
QUESTIONS
*CHATGPT*
1.) The code was correct, all guidlines got met and clearly layed out perfectly
2.) Yes the comments make it clear what the steps are.
3.) each line of code does exactly what is asked in correspondance with the comments.
4.) Yes it used the same string operations we learned like replace, length and printing a specific character from the word.
5.) Enter a word: saxophone
The 4th character is: o
The length of the word is: 9
After replacement: s--$--phone
After removing 2 characters from the end: s--$--pho










*/