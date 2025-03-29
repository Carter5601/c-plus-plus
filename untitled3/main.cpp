#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

const string optionA = "a)";
const string optionB = "b)";
const string optionC = "c)";

string MakeASnack(string optionA, string optionB);
void GiveDirectionOnAnswering(string optionA, string optionB, string optionC);
string GoingOutToEat(string optionA, string optionB, string optionC);

int main() {

    cout << "You get home from school really hungry and choose to eat. Do you" << endl;
    cout << optionA << " go out to eat" << endl;
    cout << optionB << " make a snack" << endl;
    cout << optionC << " distract yourself from being hungry" << endl;
    GiveDirectionOnAnswering(optionA, optionB, optionC);

    string userInput;
    cin >> userInput;

    if (userInput == optionA) {
        cout << "Now you have another choice to make. Do you go to" << endl;
        cout << optionA << " Panda Express" << endl;
        cout << optionB << " McDonald's" << endl;
        cout << optionC << " Subway" << endl;
        cout << GoingOutToEat(optionA, optionB, optionC);
    }
    if (userInput == optionB) {
        cout << "Do you" << endl;
        cout << optionA << " make a snack" << endl;
        cout << optionB << " eat leftovers" << endl;
        cout << MakeASnack(optionA, optionB) << endl;
    }
    if (userInput == optionC) {
        cout << "Do you" << endl;
        cout << optionA << " watch the T.V." << endl;
        cout << optionB << " exercise" << endl;

        cin >> userInput;

        if (userInput == optionA) {
            cout << "Do you" << endl;
            cout << optionA << " watch a show" << endl;
            cout << optionB << " watch a movie" << endl;

            cin >> userInput;

            if (userInput == optionA) {
                cout << "Watch White Collar." << endl;
                exit(0);
            }
            if (userInput == optionB) {
                cout << "Watch Frozen 2" << endl;
                exit(0);
            }
        }
        if (userInput == optionB) {
            cout << "Cry." << endl;
            exit(0);
        }
    }
    return 0;
}

string MakeASnack(string optionA, string optionB) {

    string userInput;
    cin >> userInput;
    string prompt;
    string prompt2;

    if (userInput == optionA) {
        prompt = "You feel really fulfilled that you were not lazy and made a snack and it tastes really good.";
        cout << prompt;
        exit(0);
    }
    if (userInput == optionB) {
        prompt2 = "You LOVE leftovers, and they taste so good reheated in the microwave.";
        cout << prompt2;
        exit(0);
    }
    return prompt;
}

void GiveDirectionOnAnswering(string optionA, string optionB, string optionC) {
    cout << "For future reference, always input either " << optionA << ", " << optionB << ", or " << optionC << endl;
}

string GoingOutToEat(string optionA, string optionB, string optionC) {

    string userInput;
    cin >> userInput;
    string prompt;
    string prompt2;
    string prompt3;

    if (userInput == optionA) {
        prompt = "You bask in orange chicken goodness and love yourself.";
        cout << prompt;
        exit(0);
    }
    if (userInput == optionB) {
        prompt2 = "You cry as you eat the food, but are still impressed that the meal is only $1.";
        cout << prompt2;
        exit(0);
    }
    if (userInput == optionC) {
        prompt3 = "You never pick Subway, only as a last resort.";
        cout << prompt3;
        exit(0);
    }
    return prompt;
}