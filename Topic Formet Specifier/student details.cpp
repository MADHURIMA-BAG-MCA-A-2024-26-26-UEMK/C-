#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables
    string name;
    int rollNo;
    float marks;

    // Input student details
    cout << "Enter student name: ";
    getline(cin, name);  // To accept full name with spaces

    cout << "Enter roll number: ";
    cin >> rollNo;

    cout << "Enter marks (out of 100): ";
    cin >> marks;

    // Display heading
    cout << "\n" << left << setw(15) << "Name" 
         << setw(10) << "Roll No" 
         << setw(10) << "Marks" << endl;
    cout << "----------------------------------------" << endl;

    // Display formatted output
    cout << left << setw(15) << name 
         << setw(10) << rollNo 
         << fixed << setprecision(2) << setw(10) << marks << endl;

    return 0;
}

