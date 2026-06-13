#include <iostream>
using namespace std;

int inputMarks();
int totalMarks(int, int, int);
float calculatePercentage(int,int, int);
char determineGrade(float);
void displayResult(int, int,int, char);

int main(){ 
    int m1, m2,m3;
float percent;
char grade;
cout << "Subject " << endl;
m1 = inputMarks();
cout << "Subject 2" << endl;
m2 = inputMarks();
cout << "Subject 3" << endl;
m3 = inputMarks();
percent = calculatePercentage(m1,m2,m3);
grade = determineGrade(percent);
 cout << "Percentage =  " << percent << "%" << endl;
 displayResult(m1,m2,m3, grade);



     return 0;


} 