#include <iostream>
using namespace std;
// function to check if a proper data type is collected
void checknumber(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (cin.fail())
    cout << "Error dismatched data type" << endl;
    else 
        cout << "entered number= " << num << endl;

        // reset cin status
        cin.clear();
        cin.ignore(10000, '\n');
        cout << " END OF FUNCTION" << endl;
}


// example 2: validate a data type
float validatenumber(){
    float n;
    do{
        cout << "Enter a number: ";
        cin>>n;
        if(!(cin>>n)){
            cout<< "Invalid data type" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
                }
                else{
                    return n;
                }
                
    } while(true);
}

// example 3: input and output files
#include <fstream>
void iofiles(){
    // delcare the objects to handle files
    // input file object 'fin'
    ifstream fin;
    // output file object fout
    ofstream fout;

    // read file 'samplefile.txt'
    // use the 'fin' object along with the open method to open the txt file
    fin.open("samplefile.txt");

    // delcare avraible 'line' to temporary store each line of 'samplefile.txt'
    string line;


    int linecounter = 1;
    while(getline(fin, line)){
        cout << "Line" << linecounter << " = " << line << endl;
        linecounter++;
        // close file
    }
fin.close();
}

#include <fstream>
// EXERCISE 1
double calc(double num1, double num2){
    char op;
    cout << "Enter a operation";
    cin>> op;

    while(cin.fail() || (op !='+' && op !='-' && op != '*' && op != '/' && op != '%')){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "wrong operation. TRY AGAIN: ";
        cin >> op;
        }
        switch(op){
            case '+':
            return num1 + num2;
            case '-':
            return num1 - num2;
            case '*':
            return num1 *num2;
            case '/':
            return num1 / num2;
            case '%':
            return (int)num1 % (int)num2;

        }
        return 0;
}

// EXERCISE 2

void createFile(){
    ofstream outFile("data_user.txt");
    outFile << "This is my output file - Wasim. \n";
    outFile.close();
}
void appendFile(string msg){
    ofstream outFile("data_user.txt", ios::app);
    outFile << msg << endl;
    outFile.close();

}

void overwriteFile(string fileName, string text){
    ofstream outFile(fileName);
    outFile << text;
    outFile.close();

}