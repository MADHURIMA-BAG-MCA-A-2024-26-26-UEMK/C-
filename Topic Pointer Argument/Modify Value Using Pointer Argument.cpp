#include <iostream>
using namespace std;

void updateValue(int* ptr) {
    *ptr = *ptr + 10;
    cout << "Inside function: updated value = " << *ptr << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    updateValue(&num);  // Passing address of num
    cout << "In main(): num = " << num << endl;

    return 0;
}
