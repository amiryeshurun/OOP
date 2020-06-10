#ifndef __PERSON_H_
#define __PERSON_H_

#include <string>
#include <fstream>

using namespace std;


class Person{
private:
    string name;
    int age;
public:
    Person(const string& new_name, int new_age) : name(new_name), age(new_age) {}
    Person(ifstream& in) {
        readBinary(in);
    }

    const string& getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    // txt: write
    // bin: read & write
    // 
    void writeBinary(ofstream& ofile) const {
        ofile.write((char*)&age, sizeof(int));
        // NO: ofile.write((char*)&name, sizeof(name));
        int len = name.length();
        ofile.write((char*)&len, sizeof(int));
        const char* realStr = name.c_str();
        ofile.write(realStr, len * sizeof(char));
    }

    void readBinary(ifstream& ifile) {
        ifile.read((char*)&age, sizeof(int));
        int len;
        ifile.read((char*)&len, sizeof(int));
        char buff[1000];
        ifile.read(buff, sizeof(char) * len);
        buff[len] = '\0';
        name = buff;
    }

    void printTxt(ostream& out) const {
        out << name << " " << age << endl;
    }

    bool operator>(const Person& p) const {
        return age > p.age;
    }
};

#endif