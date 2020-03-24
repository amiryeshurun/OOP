//
// Created by Amir Yeshurun on 2020-03-24.
//

#include "Party.h"

Party::Party(char *partyName) {
    name = strdup(partyName);
    numOfMembers = 0;
    leader = nullptr;
    members = nullptr;
}

void Party::addPartyMember(PartyMember* pm){
    if(!numOfMembers) {
        leader = pm;
        members = new PartyMember*[1];
        pm->setIdx(1);
        pm->setParty(this);
        members[0] = pm;
        ++numOfMembers;
        return;
    }
    PartyMember** tmpMembers = new PartyMember*[numOfMembers + 1];
    for(int i = 0; i < numOfMembers; i++)
        tmpMembers[i] = members[i];
    pm->setParty(this);
    pm->setIdx(numOfMembers + 1);
    tmpMembers[numOfMembers] = pm;
    delete[] members;
    members = tmpMembers;
    ++numOfMembers;
}

void Party::setLeader(PartyMember *leader) {
    Party::leader = leader;
}

int Party::getNumOfMembers() {
    return numOfMembers;
}

void Party::setNumOfMembers(int numOfMembers) {
    Party::numOfMembers = numOfMembers;
}

PartyMember **Party::getMembers() {
    return members;
}

void Party::setMembers(PartyMember **members) {
    Party::members = members;
}

char *Party::getName() {
    return name;
}

void Party::setName(char *name) {
    Party::name = name;
}

PartyMember *Party::getLeader() {
    return leader;
}
