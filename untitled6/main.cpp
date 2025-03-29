#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    string userString;

    cin >> userString;

    if (userString.find("i") != string::npos) {
        do {
            userString.replace(userString.find("i"), 1, "!");
        } while (userString.find("i") != string::npos);
    }
    else {
    }
    if (userString.find("a") != string::npos) {
        do {
            userString.replace(userString.find("a"), 1, "@");
        } while (userString.find("a") != string::npos);
    }
    else {
    }
    if (userString.find("E") != string::npos) {
        do {
            userString.replace(userString.find("E"), 1, "3");
        } while (userString.find("E") != string::npos);
    }
    else {
    }
    if (userString.find("B") != string::npos) {
        do {
            userString.replace(userString.find("B"), 1, "8");
        } while (userString.find("B") != string::npos);
    }
    else {
    }
    if (userString.find("l") != string::npos) {
        do {
            userString.replace(userString.find("l"), 1, "1");
        } while (userString.find("l") != string::npos);
    }
    else {
    }
    if (userString.find("t") != string::npos) {
        do {
            userString.replace(userString.find("t"), 1, "7");
        } while (userString.find("t") != string::npos);
    }
    else {
    }
    if (userString.find("s") != string::npos) {
        do {
            userString.replace(userString.find("s"), 1, "$");
        } while (userString.find("s") != string::npos);
    }
    if (userString.find("o") != string::npos) {
        do {
            userString.replace(userString.find("o"), 1, "0");
        } while (userString.find("o") != string::npos);
    }
    else {
    }

    cout << userString.append("z^k") << endl;

    return 0;

}