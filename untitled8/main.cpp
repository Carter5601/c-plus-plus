#include <iostream>
#include<vector>
#include <cmath>
using namespace std;

double TotalWeight(vector<double> userWeight, const int NUM_WEIGHTS);
double AverageWeight(vector<double> userWeight, const int NUM_WEIGHTS);
double MaxWeight(vector<double> userWeight, const int NUM_WEIGHTS);

int main() {
    const int NUM_WEIGHTS = 5;
    vector<double> userWeight(NUM_WEIGHTS);

    double userInput;

    cin >> userInput;
    userWeight.at(0) = userInput;

    cin >> userInput;
    userWeight.at(1) = userInput;

    cin >> userInput;
    userWeight.at(2) = userInput;

    cin >> userInput;
    userWeight.at(3) = userInput;

    cin >> userInput;
    userWeight.at(4) = userInput;

    for (int i = 0; i < NUM_WEIGHTS; ++i) {
        cout << "Enter weight " << i + 1  << ": " << endl;
    }

    cout << endl;
    cout << "You entered: ";

    for (int i = 0; i < NUM_WEIGHTS; ++i) {
        cout << userWeight.at(i) << " ";
    }

    cout << endl;
    cout << "Total weight: ";
    cout << TotalWeight(userWeight, NUM_WEIGHTS) << endl;

    cout << "Average weight: " << AverageWeight(userWeight, NUM_WEIGHTS) << endl;
    cout << "Max weight: " << MaxWeight(userWeight, NUM_WEIGHTS) << endl;



    return 0;
}

double TotalWeight(vector<double> userWeight, const int NUM_WEIGHTS) {
    double sumWeight;
    sumWeight = 0;

    for (int i = 0; i < NUM_WEIGHTS; ++i) {
        sumWeight += userWeight.at(i);
    }
    return sumWeight;
}

double AverageWeight(vector<double> userWeight, const int NUM_WEIGHTS) {

    return TotalWeight(userWeight, NUM_WEIGHTS) / NUM_WEIGHTS;
}

double MaxWeight(vector<double> userWeight, const int NUM_WEIGHTS) {
    double maxVal;

    maxVal = userWeight.at(0);
    for (int i = 0; i < NUM_WEIGHTS; ++i) {
        if (userWeight.at(i) > maxVal) {
            maxVal = userWeight.at(i);
        }
    }
    return maxVal;
}