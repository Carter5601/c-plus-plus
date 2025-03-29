#ifndef UNTITLED19_PEOPLELIST_H
#define UNTITLED19_PEOPLELIST_H

#include <vector>
#include "Person.h"

using namespace std;

class PeopleList{
public:
    void Add(Person toAdd);
    void PrintList();
    int Size();

private:
    vector<Person> people;
};

#endif //UNTITLED19_PEOPLELIST_H
