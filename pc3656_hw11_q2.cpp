//pc3656
//recursive implementations of array functions.
//2024/11/25

#include <iostream>
using namespace std;

int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);

int main() {
    int arrSize = 5;
    int arr[arrSize];

    cout << "Please enter " << arrSize << " integers in order to populate an array for tests. Press enter for each integer." << endl;
    for(int i = 0; i < arrSize; i++){
        cout << i   + 1 << ": ";
        cin >> arr[i];
    }
    cout << endl << "The sum of squares of this array is " << sumOfSquares(arr, 4) << '.' << endl;
    cout << "The array is ";
    if(isSorted(arr, arrSize)) {
        cout << "sorted." << endl;
    } else cout << "not sorted." << endl;
    return 0;
}

//Recursive sum of squares
int sumOfSquares(int arr[], int arrSize) {
    if(arrSize == 1) {
        return arr[0] * arr[0];
    }
    else {
        return arr[arrSize - 1] * arr[arrSize - 1] + sumOfSquares(arr, arrSize - 1);  
    }
}

//Recursively checking if the array is sorted.
bool isSorted(int arr[], int arrSize) {
    if(arrSize == 1) {
        return true;
    }
    else {
        if(arr[arrSize-2] >= arr[arrSize-1]) {
            return false;
        }
        return isSorted(arr, arrSize - 1);
    }
}

