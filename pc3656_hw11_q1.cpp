//pc3656
//Drawing shapes recursively

#include <iostream>
using namespace std;

void printTriangle(int n);
void printLine(int n, char c);
void printOppositeTriangle(int n);
void printRuler(int n);

int main() {
    //Testing a and b.
    int input(0);
    while(input <= 0) {
        cout << "enter a positive integer: ";
        cin >> input;
    }
    cout << endl << "Testing q1 a with input " << input << endl;
    printTriangle(input);
    cout << endl << "Testing q1 b with input " << input << endl;
    printOppositeTriangle(input);
    cout << endl << "Testing q1 c with input " << input << endl;
    printRuler(input);
    return 0;
}

//Recursive function to print a line of n *.
void printLine(int n, char c) {
    if(n == 1) {
        cout << c;
    }
    else {
        printLine(n - 1, c);
        cout << c; 
    }
} 

//q1-a
void printTriangle(int n) {
    if(n == 1) {
        printLine(n, '*');
        cout << endl;
    }
    else {
        printTriangle(n - 1);
        printLine(n, '*');
        cout << endl; 
    }
}

//q1-b
void printOppositeTriangle(int n) {
    if(n == 1) {
        printLine(n, '*');
        cout << endl;
        printLine(n, '*');
        cout << endl;
    }
    else {
        printLine(n, '*');
        cout << endl; 
        printOppositeTriangle(n - 1);
        printLine(n, '*');
        cout << endl;
    }
}

//q1-c less scary than it looks.
void printRuler(int n) {
    if(n == 1) {
        printLine(n, '-');
        cout << endl;
    }
    else {
        printRuler(n - 1);
        printLine(n, '-');
        cout << endl; 
        printRuler(n - 1);
    }

}