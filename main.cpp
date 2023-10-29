#include <iostream>
using namespace std;

int main() {
    const int numSides = 5; // Number of sides in a pentagon
    double sides[numSides]; // Array to store the lengths of the sides

    // Input the length of each side from the user
    cout << "Enter the length of each side of the pentagon:" << endl;
    for (int i = 0; i < numSides; i++) {
        cout << "Side " << i + 1 << ": ";
        cin >> sides[i];
    }

    // Calculate the perimeter of the pentagon
    double perimeter = 0.0;
    for (int i = 0; i < numSides; i++) {
        perimeter += sides[i];
    }

    // Output the calculated perimeter
    cout << "The perimeter of the pentagon is: " << perimeter << endl;

    return 0;
}
