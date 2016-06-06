//
// Created by zhiholiu on 1/19/16.
//

#ifndef CLOSURE_PERSON_H
#define CLOSURE_PERSON_H

#include <string>

using namespace std;

enum Gender { MALE, FEMALE};

class Person {

private:
    string firstName;
    string lastName;
    int age = 0;
    Gender gender = MALE;

public:
    friend ostream& operator<<(ostream& os, const Person& p);

    Person(const string &firstName, const string &lastName, int age, const Gender &gender) : firstName(firstName),
                                                                                             lastName(lastName),
                                                                                             age(age),
                                                                                             gender(gender) { }

public:
    const string &getFirstName() const {
        return firstName;
    }

    void setFirstName(const string &firstName) {
        Person::firstName = firstName;
    }

    const string &getLastName() const {
        return lastName;
    }

    void setLastName(const string &lastName) {
        Person::lastName = lastName;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Person::age = age;
    }

    const Gender &getGender() const {
        return gender;
    }

    void setGender(const Gender &gender) {
        Person::gender = gender;
    }
};


#endif //CLOSURE_PERSON_H
