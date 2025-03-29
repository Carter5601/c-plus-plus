#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double SALES_TAX = .08;

int main() {

    double monetaryInput;
    double monetaryInput1;
    double monetaryInput2;
    cin >> monetaryInput;

    if (abs(monetaryInput) > 0.0) {
        while (abs(monetaryInput) > 0.0) {
            cin >> monetaryInput1;
            monetaryInput2 = monetaryInput + monetaryInput1;
            monetaryInput = monetaryInput2;
            if (abs(monetaryInput1) <= 0.0) {
                cout << "The receipt for your order will have these totals" << endl;
                cout << endl;
                cout << "Subtotal: $" << fixed << setprecision(2) << monetaryInput + monetaryInput1 << endl;
                cout << "Sales tax: $" << fixed << setprecision(2) <<
                (monetaryInput + monetaryInput1) * SALES_TAX << endl;
                cout << "Total: $" << fixed << setprecision(2) << monetaryInput + monetaryInput1 +
                ((monetaryInput + monetaryInput1) * SALES_TAX) << endl;
                break;
            }
        }
    }
    else {
        cout << "The receipt for your order will have these totals" << endl;
        cout << endl;
        cout << "Subtotal: $" << fixed << setprecision(2) << monetaryInput << endl;
        cout << "Sales tax: $" << fixed << setprecision(2) <<
             monetaryInput * SALES_TAX << endl;
        cout << "Total: $" << fixed << setprecision(2) << monetaryInput +
        (monetaryInput * SALES_TAX) << endl;
    }

    return 0;
}

