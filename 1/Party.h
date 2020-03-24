//
// Created by Amir Yeshurun on 2020-03-24.
//

#ifndef OOP_PARTY_H
#define OOP_PARTY_H

#include "PartyMember.h"

class Party {
private:
    char* name;
    PartyMember* leader;
    int numOfMembers;
    PartyMember** members;
public:
    Party(char* partyName);
    void addPartyMember(PartyMember* pm);
    void setLeader(PartyMember *leader);
    int getNumOfMembers();
    void setNumOfMembers(int numOfMembers);
    PartyMember **getMembers();
    void setMembers(PartyMember **members);
    char *getName();
    void setName(char *name);
    PartyMember *getLeader();
};


#endif //OOP_PARTY_H
