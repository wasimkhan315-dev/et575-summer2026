/*
Wasim Khan
June 2nd, 2026
Lab 5: String methods
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "\n EXAMPLE 1 : String Indexing" << endl;
    // characters within a string is accessible using an index number.
    // index starts from 0 (left most)
    string username = "peterpan123";
    cout << "The fourth character of username = " <<username[3] << endl;
    cout << "The sixth character of username = " <<username.at(5) << endl;

    cout << "\n EXAMPLE 2 : Length of a string " << endl;
    // length shows the number of characters ina string including the whitespace
    int num_username = username.length();

    cout << " There are " << num_username << "characters in username " << endl;

    cout << "\n EXAMPLE 3: Adding strings " << endl;
    // strings can be concatenated using the + operator
    string n = "Never ";
    string m = "Again";
    cout << n + m << endl;

    cout << "\n EXAMPLE 4: Subtracting characters from a string  " << endl;
    // substr() method extracts characters from a string
    cout << "Extracted word = " << n.substr(1,4) << endl;


    cout << "\n EXAMPLE 5: inserting charcters into a string\n";
    // insert() method insert characters into a string
    // insert(x,y) --> x = inserting index position, y = characters to be inserted
    // for example insert LAND in between the username as "peterLANDpan123"
    cout << username << endl;
    username.insert(5, "LAND");
    cout << username << endl;


    cout <<"\n EXAMPLE 6: add characters to the end of a string " << endl;
    // append() method adds characters to the end of a string
    username.append("END");
    cout << username << endl;
    cout << "\n" << endl;

    cout << "\n EXAMPLE 7: Replacing characters in a string " << endl;
    // replace () method replaces characters in a string
    // replace(x, y, z) x = index where the replacement starts, y = number of characters to be replaced from x, z = new numbers
    string name = "Peter pan";
    cout << name << endl;
    name.replace(1, 4, "atrick");
    cout << name << endl;
    cout << "\n" << endl;

    cout << "\n EXAMPLE 8: erasing characters in a string " << endl;
    // erase () method erases characters from a string
    // erase(x,y) x = index where characters will be removed , y = amount of characters to be removed from index x
    // erase "an" from " (patrick pan)"
    name.erase(9, 2);
    cout << name << endl;
    cout << "\n" << endl;

    cout << "\n EXAMPLE 9: find the index of characters in a string" << endl;
    // find() method returns the index of thr found character
    // find(x) x = characters to be found
    cout << username << endl;
    int index_r = username.find("pan");
    cout << " Index of letter pan = " << index_r << endl;
    int never = username.find("NEVER");
    cout << "Index of NEVER" << never << endl;
    cout << "\n" << endl;
    

    cout << "\n EXAMPLE 10: Combinate Methods " << endl;
    // add string m in username starting NEVER
    cout << username << endl;
    cout << m << endl;
    // find index for 123
    int index123 = username.find("123");
    cout << index123 << endl;
    // add value of string m starting from index123
    username.insert(index123,m);
    cout << username << endl;

    cout << "\n practice exam 1 " << endl;
    string password = "peterpan123";
    int a = password.length();
    int b = a - 2 ;
    password.replace(b,3,"NONE");
      
    





    return 0;

}
