#ifndef __PERSON_H_
#define __PERSON_H_

#include <string>

using namespace std;

class Person{
private:
    string name;
    int age;
public:
    Person(const string& new_name, int new_age) : name(new_name), age(new_age) {}

    const string& getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    bool operator<=(const Person& p) {
        return age <= p.age;
    }

    friend ostream& operator<<(ostream& out, const Person& p);
};

ostream& operator<<(ostream& out, const Person& p) {
    out << p.name << " " << p.age;
    return out;
}

#endif