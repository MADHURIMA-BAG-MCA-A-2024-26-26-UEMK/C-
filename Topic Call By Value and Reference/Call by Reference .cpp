#include <iostream>
using namespace std;

void modify(int &x) {
    x = x + 10;
    cout << "Inside modify(): x = " << x << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    modify(num);  // Call by reference
    cout << "In main(): num = " << num << endl;  // Value is changed

    return 0;
}
