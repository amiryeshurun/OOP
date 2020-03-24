//
// Created by Amir Yeshurun on 2020-03-24.
//

#ifndef OOP_PARTYMEMBER_H
#define OOP_PARTYMEMBER_H


#include <string>

class Party;

class PartyMember {
private:
    char* name;
    int age;
    int idx;
    Party* party;
public:
    PartyMember();
    PartyMember(char* newName, int newAge, int newIdx = 0);
    bool equals(PartyMember* pm);
    char *getName();
    void setName(char *name);
    int getAge();
    void setAge(int age);
    int getIdx();
    void setIdx(int idx);
    Party *getParty();
    void setParty(Party *party);
};



#endif //OOP_PARTYMEMBER_H
