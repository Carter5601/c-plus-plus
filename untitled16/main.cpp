#include <iostream>
#include <vector>

using namespace std;

void PrintVector(vector<int> vector);
void ReverseVector(vector<int> vector);

int main() {
    int vectorSize;
    int multiplier;


    cout << "Please enter the vector size:" << endl;
    cin >> vectorSize;
    cout << "Please enter the multiplier:" << endl;
    cin >> multiplier;

    vector<int> vector(vectorSize);

    for (int i = 0; i < vectorSize; ++i) {
        vector.at(i) = i * multiplier;
    }
    PrintVector(vector);
    ReverseVector(vector);

    return 0;
}

void PrintVector(vector<int> vector) {
    for (int i = 0; i < vector.size(); ++i) {
        cout << vector.at(i) << endl;
    }
}

void ReverseVector(vector<int> vector) {
    for (int i = 0; i < vector.size() - (i + 1); ++i) {
        int tempVal;
        tempVal = vector.at(i);
        vector.at(i) = vector.at(vector.size() - (i + 1));
        vector.at(vector.size() - (i + 1)) = tempVal;
    }
    for (int i = 0; i < vector.size(); ++i) {
        cout << vector.at(i) << endl;
    }
}
