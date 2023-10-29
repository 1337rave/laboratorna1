#include <iostream>
using namespace std;	

int main() {
    double profit = 0.0;

    for (int month = 1; month <= 6; month++) {
        double monthlyProfit;
        cout << "Enter profit for month " << month << ": ";
        cin >> monthlyProfit;

        profit += monthlyProfit;
    }

    cout << "Total profit for 6 months: " << profit << endl;

    return 0;
}