//
// Created by Amir Yeshurun on 2020-03-24.
//

#ifndef OOP_KNESSET_H
#define OOP_KNESSET_H

#include "PartyMember.h"
#include "Party.h"

class Knesset {
private:
    int number;
    int numberOfParties;
    PartyMember* pm;
    PartyMember* speaker;
    Party** parties;
public:
    Knesset();
    Knesset(int number);
    void setNumber(int number);
    void addParty(Party* party);
    void addPrimeMinister(PartyMember* pm);
    void setSpeaker(PartyMember *speaker);
    void addPartyMember(PartyMember* pm);
    Party* getPartyAtIdx(int i);
};


#endif //OOP_KNESSET_H
