#include <iostream>
using namespace std;

void findMax(int* a, int* b) {
    if (*a > *b)
        cout << *a << " is greater." << endl;
    else
        cout << *b << " is greater." << endl;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    findMax(&num1, &num2);

    return 0;
}
