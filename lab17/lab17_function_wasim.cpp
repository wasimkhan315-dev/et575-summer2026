#include <iostream>
using namespace std;

// exampl 1: search appilcation
// function to populate an array. The function only collects poisitive numbers.
// numberuserindex stores the index of the last collected_positive number

void filluparray(int *arr, int &numberuserindex, int sizearray){
    int number, index = 0;
    do{
        cout << "enter a positive number: ";
        cin>>number;
        if(number>0){
            arr[index] = number;
            index++;
        }
    }while(number>0 && index < sizearray);

    numberuserindex = index;
}

// function to print each element in he array
void printelements(int *arr, int numberuserindex){
    for (int i = 0; i < numberuserindex; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}


// function to search if a target number exists in an array
// the function returns the index of the found number
// if the target number doesnt exist in the arry , the function returns
int search( int *arr, int &numberuserindex, int targetnumber){
    int index = 0;
    bool found = false;
    while(!found&&(index<numberuserindex)){
        if(targetnumber == arr[index])
           found = true;
           else 
               index++;
    }
    if (found)
        return index++;
        else
        return -1;
    
}

#include <cstdlib>

const int ARRAY_SIZE = 5;

// EXERCiSE A
int findmin(int a[], int size){
    int minvalue = a[0];
    for(int i=1; i < size; i++){
        if (a[i] < minvalue){
            minvalue = a[i];
        }
    }
    return ;
}

// EXERCISE B
void populatedArray2D(int arrayNumber2D[][ARRAY_SIZE]){
    for(int row = 0;row < ARRAY_SIZE; row++){
        for(int col=0; col < ARRAY_SIZE; col++){
            arrayNumber2D[row][col]= rand() % 255 + 1;
        }
    }
}

int range2D(int arrayNumber2D[][ARRAY_SIZE], int min, int max){
    int count = 0;
    for(int row = 0; row < ARRAY_SIZE; row++){
        for(int col = 0; col < ARRAY_SIZE; col++){
            if(arrayNumber2D[row][col]>= min && arrayNumber2D[row][col]<=max){
                count++;
            }
        }
    }
    return count;
}