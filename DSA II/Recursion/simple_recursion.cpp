#include <iostream>
using namespace std;
int count = 0;

void printNumbers() {
    // Base case: stop after printing 1 through 5.
    if (count == 5) {
        return;
    }

    count++;
    cout << count << " ";
    printNumbers(); // Recursive call
}

int main() {
    printNumbers();
    return 0;
}
