//
// Created by Amir Yeshurun on 2020-03-24.
//

#include "Knesset.h"


Knesset::Knesset() {
    number = 0;
    numberOfParties = 0;
    pm = nullptr;
    speaker = nullptr;
    parties = nullptr;
}

Knesset::Knesset(int number) {
    this->number = number;
    pm = nullptr;
    speaker = nullptr;
    parties = nullptr;
    // .....
}

void Knesset::setNumber(int number){
    this->number = number;
}

void Knesset::addParty(Party* party) {
    if(!numberOfParties) {
        parties = new Party*[1];
        parties[0] = party;
        ++numberOfParties;
        return;
    }
    Party** tmpParties = new Party*[numberOfParties + 1];
    for(int i = 0; i< numberOfParties; i++)
        tmpParties[i] = parties[i];
    tmpParties[numberOfParties] = party;
    ++numberOfParties;
    delete[] parties;
    parties = tmpParties;
}

void Knesset::addPrimeMinister(PartyMember* pm){
    if((speaker != nullptr && !speaker->equals(pm)) || speaker == nullptr)
        this->pm = pm;
}

void Knesset::setSpeaker(PartyMember *speaker) {
    if((pm != nullptr && !pm->equals(speaker)) || pm == nullptr)
        this->speaker = speaker;
}

void Knesset::addPartyMember(PartyMember* pm) {
    for(int i=0;i<numberOfParties;i++){
        // +, -, 0
        if(!strcmp(parties[i]->getName(), pm->getParty()->getName())) {
            parties[i]->addPartyMember(pm);
        }
    }
}

Party* Knesset::getPartyAtIdx(int i) {
    return parties[i];
}
