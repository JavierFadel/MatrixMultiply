#include <iostream>
using namespace std;

// Main functions.
int main() {
    // Variable declaration.
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2;

    // Display input: ask the user to enter rows and columns.
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // Matrix requirement: column of first matrix should equal to row of second matrix.
    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1!=r2)
    {
        cout << "Column of first matrix not equal to row of second.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    // Storing elements of first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c1; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }

    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(int i = 0; i < r2; ++i) {
        for(int j = 0; j < c2; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }

    // Initializing elements of matrix mult to 0.
    for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c2; ++j) {
            mult[i][j]=0;
        }
    }

    // Multiplying matrix a and b and storing in array mult.
    for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c2; ++j) {
            for(int k = 0; k < c1; ++k) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c2; ++j) {
            cout << " " << mult[i][j];
            if(j == c2-1)
                cout << endl;
        }
    }

    return 0;
}