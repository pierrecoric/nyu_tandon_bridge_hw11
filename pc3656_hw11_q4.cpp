//pc3656
//2024/11/29
//Jump It

#include <iostream>
using namespace std;

const int MAX(2147483647);

int jumpIt(int arr[], int cursor, int arrSize);

int main (){
    //Test
    int board[6] = {0, 3, 80, 6, 57, 10};
    cout << jumpIt(board, 0, 6) << endl;
    return 0;
}

int jumpIt(int arr[], int cursor, int arrSize) {

    //When the array only contains one element.
    if (cursor == arrSize - 1) {
        return arr[cursor];
    }

    //Calculate the smallest sum from the next position
    int next = jumpIt(arr, cursor + 1, arrSize);
    //Initialize the value at the jumped position to the maximal value that an integer can take.
    int jump(MAX);
    //Calculate the smallest sum by jumping a position if there are still enough elements in the array.
    if (cursor + 2 < arrSize) {
        jump = jumpIt(arr, cursor + 2, arrSize);
    }
    //Checking which sum is the smallest.
    if (next < jump) {
        return arr[cursor] + next;
    } else {
        return arr[cursor] + jump;
    }
}