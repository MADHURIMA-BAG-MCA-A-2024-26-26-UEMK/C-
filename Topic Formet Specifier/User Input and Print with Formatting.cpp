#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    float marks;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your marks: ";
    cin >> marks;

    cout << left << setw(10) << "Name" << right << setw(10) << "Marks" << endl;
    cout << left << setw(10) << name << right << setw(10) << fixed << setprecision(2) << marks << endl;

    return 0;
}
