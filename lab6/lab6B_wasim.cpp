#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Ask the user to type a word and save it in 'new_word'
    string new_word;
    cout << "Enter a word (at least 5 characters long): ";
    cin >> new_word;

    // 2. Print the 4th character of the word
    // Note: C++ strings use 0-based indexing, so the 4th character is at index 3
    if (new_word.length() >= 4) {
        cout << "The 4th character is: " << new_word[3] << endl;
    } else {
        cout << "The word is too short to have a 4th character." << endl;
    }

    // 3. Find and print the length of the word
    cout << "The length of the word is: " << new_word.length() << endl;

    // 4. Replace three characters starting from the second character with "-- $ --"
    // Note: The second character is at index 1
    if (new_word.length() >= 4) { 
        new_word.replace(1, 3, "-- $ --");
        cout << "After replacement: " << new_word << endl;
    } else {
        cout << "Word is too short to replace 3 characters from the second position." << endl;
    }

    // 5. Remove two characters from the end of the message
    if (new_word.length() >= 2) {
        // erase(starting_index, number_of_characters)
        new_word.erase(new_word.length() - 2, 2);
        cout << "After removing last two characters: " << new_word << endl;
    } else {
        cout << "Word is too short to remove two characters." << endl;
    }

    return 0;
}


/*
QUESTIONS
*GEMINI*
1.)   The code was correct and output the right results.
2.) Comments were clear and some of them even included extra notes.
3.) Yes everything was explained.
4.) It did but also went ahead and more complex to using loops like if and else which covers every option depending on if a word is long or short characters.
5.) Enter a word (at least 5 characters long): building
The 4th character is: l
The length of the word is: 8
After replacement: b-- $ --ding
After removing last two characters: b-- $ --di





*/