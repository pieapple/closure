#include <iostream>
#include <vector>
#include "Person.h"
#include "AgeCompare.h"

using namespace std;

ostream &operator<<(ostream &os, const Person &p) {
    os << p.getLastName() << p.getFirstName() << ", age=" << p.getAge() << ", gender=" << p.getGender();
    return os;
}

bool isYounger(const Person &p1, const Person &p2) {
    return p1.getAge() < p2.getAge();
}

int main() {
    vector<Person> people;
    people.push_back(Person("四", "李", 1, Gender::FEMALE));
    people.push_back(Person("五", "王", 50, Gender::MALE));
    people.push_back(Person("三", "张", 100, Gender::MALE));

    sort(people.begin(), people.end(), isYounger);

   // auto olderPerson = find_if(people.begin(), people.end(), AgeCompare(31));

    auto g = [](int age) {
        age = 50;
        auto f = [&age](const Person &p) {
            cout << "age is: " << age << "," << &age << endl;
            if (p.getAge() > age) cout << p << endl;
        };
        age = 1;
        cout << "1age: " << age << "," << &age << endl;
        return f;
    };

    for_each(people.begin(), people.end(), g(30));


    int a = 10;

    cout << "a: " << a << endl;

    a = 20;

    cout << "a: " << a << endl;

    return 0;
}