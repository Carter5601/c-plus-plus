#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int RandomDiceGenerator(int numDice, bool &continueDiceGame);

int main() {
    bool continueDiceGame = true;
    string userString;
    cout << "Ready to play Liar's Dice?" << endl;

    while (continueDiceGame) {
        int numDice;
        cout << "Enter the number of dice:" << endl;
        RandomDiceGenerator(numDice, continueDiceGame);
    }

    return 0;
}

int RandomDiceGenerator(int numDice, bool &continueDiceGame) {
    cin >> numDice;
    if (numDice > 0) {
        for (int i = 0; i < numDice; ++i) {
            cout << rand() % 5 + 1 << endl;
        }
    }
    else if (numDice == 0) {
        continueDiceGame = false;
    }
}

