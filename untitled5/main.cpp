#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const string OPTION_A = "a)";
const string OPTION_B = "b)";
const string OPTION_C = "c)";
const string OPTION_D = "d)";
const string OPTION_E = "e)";

string MakeASnack(string OPTION_A, string OPTION_B);
void GiveDirectionOnAnswering(string OPTION_A, string OPTION_B, string OPTION_C, string OPTION_D, string OPTION_E);
string GoingOutToEat(string OPTION_A, string OPTION_B, string OPTION_C);
void Restart(string OPTION_A,string OPTION_B, string OPTION_C, string OPTION_D);
void Rand(string OPTION_A, string OPTION_B, string OPTION_C);

int main() {

    srand(time(0));

    cout << "You get home from school really hungry and choose to eat. Do you" << endl;
    cout << OPTION_A << " go out to eat" << endl;
    cout << OPTION_B << " make a snack" << endl;
    cout << OPTION_C << " distract yourself from being hungry" << endl;
    cout << OPTION_D << " don't know, pick an option at random" << endl;
    cout << OPTION_E << " show the prompt again" << endl;
    GiveDirectionOnAnswering(OPTION_A, OPTION_B, OPTION_C,
                             OPTION_D, OPTION_E);

    Restart(OPTION_A,OPTION_B, OPTION_C, OPTION_D);

    return 0;
}

void Restart(string OPTION_A,string OPTION_B, string OPTION_C, string OPTION_D) {

    string userInput;
    cin >> userInput;

    if (userInput == OPTION_A) {
        cout << "Now you have another choice to make. Do you go to" << endl;
        cout << OPTION_A << " Panda Express" << endl;
        cout << OPTION_B << " McDonald's" << endl;
        cout << OPTION_C << " Subway" << endl;
        GoingOutToEat(OPTION_A, OPTION_B, OPTION_C);
    }
    if (userInput == OPTION_B) {
        cout << "Do you" << endl;
        cout << OPTION_A << " make a snack" << endl;
        cout << OPTION_B << " eat leftovers" << endl;
        MakeASnack(OPTION_A, OPTION_B) ;
    }
    if (userInput == OPTION_C) {
        cout << "Do you" << endl;
        cout << OPTION_A << " watch the T.V." << endl;
        cout << OPTION_B << " exercise" << endl;

        cin >> userInput;

        if (userInput == OPTION_A) {
            cout << "Do you" << endl;
            cout << OPTION_A << " watch a show" << endl;
            cout << OPTION_B << " watch a movie" << endl;

            cin >> userInput;

            if (userInput == OPTION_A) {
                cout << "Watch White Collar." << endl;
                exit(0);
            }
            if (userInput == OPTION_B) {
                cout << "Watch Frozen 2" << endl;
                exit(0);
            }
        }
        if (userInput == OPTION_B) {
            cout << "Cry." << endl;
            exit(0);
        }
    }
    if (userInput == OPTION_D) {
        cout << "Here is your random number: ";
        cout << ((rand () % 3) + 1) << endl;
        cout << "For:" << "\t" << "Input" << endl;
        Rand(OPTION_A, OPTION_B, OPTION_C);
    }
    while (userInput == OPTION_E) {
        cout << "You get home from school really hungry and choose to eat. Do you" << endl;
        cout << OPTION_A << " go out to eat" << endl;
        cout << OPTION_B << " make a snack" << endl;
        cout << OPTION_C << " distract yourself from being hungry" << endl;
        cout << OPTION_D << " don't know, pick an option at random" << endl;
        cout << OPTION_E << " show the prompt again" << endl;
        GiveDirectionOnAnswering(OPTION_A, OPTION_B, OPTION_C,
                                 OPTION_D, OPTION_E);

        Restart(OPTION_A,OPTION_B, OPTION_C, OPTION_D);
    }
}

string MakeASnack(string OPTION_A, string OPTION_B) {

    string userInput;
    cin >> userInput;
    string prompt;
    string prompt2;

    if (userInput == OPTION_A) {
        prompt = "You feel really fulfilled that you were not lazy and made a snack and it tastes really good.";
        cout << prompt;
        exit(0);
    }
    if (userInput == OPTION_B) {
        prompt2 = "You LOVE leftovers, and they taste so good reheated in the microwave.";
        cout << prompt2;
        exit(0);
    }
    return prompt;
}

void GiveDirectionOnAnswering(string OPTION_A, string OPTION_B, string OPTION_C, string OPTION_D, string OPTION_E) {
    cout << "For future reference, always input either " << OPTION_A << ", " << OPTION_B << ", " << OPTION_C
    << ", " << OPTION_D << ", or " << OPTION_E << endl;
}

string GoingOutToEat(string OPTION_A, string OPTION_B, string OPTION_C) {

    string userInput;
    cin >> userInput;
    string prompt;
    string prompt2;
    string prompt3;

    if (userInput == OPTION_A) {
        prompt = "You bask in orange chicken goodness and love yourself.";
        cout << prompt;
        exit(0);
    }
    if (userInput == OPTION_B) {
        prompt2 = "You cry as you eat the food, but are still impressed that the meal is only $1.";
        cout << prompt2;
        exit(0);
    }
    if (userInput == OPTION_C) {
        prompt3 = "You never pick Subway, only as a last resort.";
        cout << prompt3;
        exit(0);
    }
    return prompt;
}

void Rand(string OPTION_A, string OPTION_B, string  OPTION_C) {

    for (int i = 1; i <= 3; ++i) {
        cout << i << "\t";
        if (i == 1) {
            cout << OPTION_A << endl;
        }
        if (i == 2) {
            cout << OPTION_B << endl;
        }
        if (i == 3) {
            cout << OPTION_C << endl;
        }
    }
    Restart(OPTION_A, OPTION_B, OPTION_C, OPTION_D);
}







