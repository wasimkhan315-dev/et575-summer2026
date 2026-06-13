#include <iostream>
using namespace std;

int inputMarks(){
    int mark;
    while(mark,0 || mark >100){
    cout << "Try again: ";
    cin >> mark;

}
return mark;


}
int totaMarks(int m1,int m2, int m3){
    return m1 + m2 + m3;
}
char determineGrade(float percent){
    if(percent>=90)
    return 'A';
 else if(percent >=80)
    return 'B';
      else if(percent >=70)
    return 'C';
    else if(percent >=60)
    return 'D';
       else 
    return 'F';
}
void displayResult(int m1, int m2, int m3, char grade){
    cout << "with marks" << m1 << "," << m2 << "'" << m3 << "'" << " the grade is" << grade << endl;

}