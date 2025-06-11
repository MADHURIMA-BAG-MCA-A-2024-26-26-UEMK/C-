#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left << setw(10) << "Name" << right << setw(10) << "Score" << endl;
    cout << left << setw(10) << "Alice" << right << setw(10) << 95.5 << endl;
    cout << left << setw(10) << "Bob" << right << setw(10) << 88.75 << endl;

    return 0;
}
