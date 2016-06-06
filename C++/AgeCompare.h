//
// Created by zhiholiu on 1/19/16.
//

#ifndef CLOSURE_AGECOMPARE_H
#define CLOSURE_AGECOMPARE_H


#include "Person.h"

class AgeCompare {
private:
    int age;

public:
    AgeCompare(int age) : age(age) { }

    bool operator() (const Person& p) const {
        return p.getAge() >= age;
    }
};


#endif //CLOSURE_AGECOMPARE_H
