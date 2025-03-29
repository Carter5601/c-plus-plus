#include <iostream>
#include <string>
using namespace std;

#include "ItemToPurchase.h"

void TeamPerson::SetFullName(string firstAndLastName) {
    fullName = firstAndLastName;
}

void TeamPerson::SetAgeYears(int ageInYears) {
    ageYears = ageInYears;
}

string TeamPerson::GetFullName() const {
    return fullName;
}

int TeamPerson::GetAgeYears() const {
    return ageYears;
}

void TeamPerson::Print() const {
    cout << "Full name: "   << fullName << endl;
    cout << "Age (years): " << ageYears << endl;
}