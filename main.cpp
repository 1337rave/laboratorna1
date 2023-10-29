#include <iostream>
using namespace std;

int main() {

    const int arraySize = 2; 
    int myArray[arraySize];
    cout << "Enter " << arraySize << " integers:" << endl;

    for (int i = 0; i < arraySize; i++) {
        cin >> myArray[i];
    }
    cout << "Array in reverse order:" << endl;
    for (int i = arraySize - 1; i >= 0; i--) {
        cout << myArray[i] << " ";
    }
    return 0;
}