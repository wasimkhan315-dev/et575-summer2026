/*
Wasim Khan
June 1st, 2026
Lab 3: Numerical Variables
*/

#include <iostream>
using namespace std;
int main() {
    int num = 5;
    cout << "The number is " << num << endl;
    
    float num1 = 2.3;
    cout << "The float data is = " << num1 << endl;


    double num2 = 3.836283625187;
    cout << "The double data is = " << num2 << endl;

    const float GRAVITY = 9.8;
    float time = 0, height = 0;


     // Collect the time
    cout<<"Enter the falling time";
    cin>>time;
    
    // Calculate the height of falling object
    height = 0.5*GRAVITY*time*time;
    cout << "The height of a falling object at " << time << " is " << height << " meters. " << endl;


    // Example 4
    cout << "\n" << " The circumference of a circle. " << endl;
    const float PI = 3.14159;
    float circumference = 0, area = 0, radius = 0;

    // collect radius
    cout << " Enter a radius " << endl;
    cin >> radius;

    // print result
    cout << "The circumfirence is = " << circumference << endl;
     area = PI*radius*radius;

    cout << "\n EXCERCISE " << endl;

     // Declare 
   const float PI = 3.14159;
   int radius;
   float volume;
   float area;

   // Prompt a message and input a radius
   cout << "Enter radius " << endl;
   cin >> radius;

   // Find the area of the circle
   area = PI*radius*radius;
   volume = (4*3.0)*PI*radius*radius*radius;
   
   // Print
   cout << "The area of the cirle is " << area << endl;
   cout << endl;
   cout << "The volume of the sphere is " << volume << endl;
    return 0;
}