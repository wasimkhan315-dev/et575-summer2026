/*
Wasim Khan
June 3 2026
Lab 7: control flow
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n --- example 1 : bool variable --- " << endl;
    // bool variable to check if a number is poisitive
    // declare variable
    int n;
    bool checkpositive;

    // colllect number
    cout << "Enter a number " << endl;
    cin >> n;

    // check if number is positive
    checkpositive = n > 0;

    // print 
    cout << "Is Number " << n << " positive? " << checkpositive << endl;
     
    // update checkpositive
    checkpositive = -5;
    cout << " updated checkpositive = " << checkpositive << endl;

    cout << "\n --- example 2 : if statement --- " << endl;
    // check if n is 0
    int c = 10;
    if(n==0)
        cout << "n is zero! ";
        c += 20;


        cout << "\t value of c" << endl;



    cout << endl;


    cout << "--- example 3 : if-else statement --- " << endl;
    // if else is an ON/OFF switch
    // check if a number is even or odd. Even numbers will have a remiander of 0
    if(n%2 == 0){
        cout << n << " is an even number." << endl;
    }
    else{
        cout << n << " is an ODD number" << endl;
    }

    cout << "\n --- example 4: if else sttement" << endl;

   // declare variables
   int wavelength = 0;
   string emittedlight= "";

   // update wavelength
   cout << "Enter a wavelength: " << endl;
   cin >> wavelength;

   // mulitway
   if(wavelength<379 && wavelength>=10){emittedlight = "ULTRAVIOLET";}
    else if(wavelength<=520 && wavelength>=380) {emittedlight = "BLUE";}
    else if(wavelength<=590 && wavelength>=521) {emittedlight = "GREEN";}
    else if(wavelength<=740 && wavelength>=591) {emittedlight = "RED";}
    else if (wavelength>=741) {emittedlight = "INFRARED";}
    else {emittedlight = "UNDEFINED";}

    //print result
    cout << wavelength << "nm emits " << emittedlight << "light " << endl;

    cout << "\n --- example 5:   " << endl;
    // conditional operator: three operands --> condition? --> expression1 (true) : expression2(false)
    /*
    example
    if n(%2 == 0) {
        cout << n << "is an EVEN number " << endl;
     }
    else {
    cout << n << " is an EVEN number " << endl;
     */
    cout << n <<  (n%2 == 0 ? " is an EVEN number" : " is an ODD number") << endl;


    cout << "\n --- example 6: conditional operator --- " << endl;
    // chek if n if greater than 10. If n is greater than 10 set the max value to n.
    int max = 10;
    bool checkmax = false;
    if(n>10)
      cout << " This number is greater than 10 " << endl;
      else cout << " This number is not greater than 10 " << endl;



    // print results
    cout << " is n greater than 10" <<endl;





    cout << "\n --- Example 7 : nested conditional statement --- " << endl;
    if (n>0 && n%2 ==0) {
        cout << "positive and even number "<<endl;
    
    }
    else if (n<0 && n%2!=0) {
        cout << "positive and odd number" << endl;
    
    }
    else if (n<0 && n%2!=0){
        cout<< "negative and even number" << endl;
    
    }
    else if (n<0 && n%2!=0) {
        cout << " negative and odd number" << endl;
        
    }
    else {
        cout << " zero" << endl;

    }
    
    cout << "\n EXERCISE " << endl;

    float weight;
    float shippingcost;


    // assign the weight
    cout << " Enter the package weight in pounds " << endl;
    cin >> weight;

    bool smallpackage = (weight > 0);
    bool validweight = (weight <= 2);

    if (validweight)
    {
        if (smallpackage){shippingcost = 5.00;
        }
        else{ 
            shippingcost = (weight <= 5) ? 8.20 :
            (weight<=10) ? 10.25 : 12.50;
        }
    }
    else {
        shippingcost = 0.0;
        
    } 
     cout << " A package of weight " << weight << "costs $" << shippingcost << endl;       
    

     return 0;
}
