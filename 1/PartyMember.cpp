//
// Created by Amir Yeshurun on 2020-03-24.
//

#include "PartyMember.h"

PartyMember::PartyMember() {
    name = nullptr;
    age = 0;
    idx = 0;
    party = nullptr;
}

PartyMember::PartyMember(char* newName, int newAge, int newIdx) {
    name = strdup(newName);
    age = newAge;
    idx = newIdx;
    party = nullptr;
}

bool PartyMember::equals(PartyMember* pm) {
    return !strcmp(pm->name, name) && pm->age == age && idx == pm->idx;
}

char *PartyMember::getName() {
    return name;
}

void PartyMember::setName(char *name) {
    PartyMember::name = name;
}

int PartyMember::getAge() {
    return age;
}

void PartyMember::setAge(int age) {
    PartyMember::age = age;
}

int PartyMember::getIdx() {
    return idx;
}

void PartyMember::setIdx(int idx) {
    PartyMember::idx = idx;
}

Party *PartyMember::getParty() {
    return party;
}

void PartyMember::setParty(Party *party) {
    PartyMember::party = party;
}
