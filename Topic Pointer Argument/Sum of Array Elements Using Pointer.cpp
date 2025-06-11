#include <iostream>
using namespace std;

int main() {
    int arr[5], sum = 0;
    int* ptr = arr;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> *(ptr + i);  // using pointer to input
        sum += *(ptr + i);  // using pointer to sum
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
