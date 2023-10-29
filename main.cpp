#include <iostream>
using namespace std;

int main() {
    const int numMonths = 12;
    double profits[numMonths]; 

    // Input profits for each month
    cout << "Enter profits for each of the 12 months:" << endl;
    for (int i = 0; i < numMonths; i++) {
        cout << "Month " << i + 1 << ": ";
        cin >> profits[i];
    }

    double maxProfit = profits[0];
    double minProfit = profits[0];
    int maxMonth = 1; 
    int minMonth = 1; 

    for (int i = 1; i < numMonths; i++) {
        if (profits[i] > maxProfit) {
            maxProfit = profits[i];
            maxMonth = i + 1; 
        }
        if (profits[i] < minProfit) {
            minProfit = profits[i];
            minMonth = i + 1; 
        }
    }
    cout << "Month with maximum profit: " << maxMonth << " (Profit: " << maxProfit << ")" << endl;
    cout << "Month with minimum profit: " << minMonth << " (Profit: " << minProfit << ")" << endl;

    return 0;
}
