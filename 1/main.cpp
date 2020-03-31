//
// Created by Amir Yeshurun on 2020-03-24.
//


/*
 * Create the following classes:
 *
 * - Party
 * - Party Member
 * - Knesset
 *
 * Party should have:
 * - party name (:string)
 * - party leader (:Party Member)
 * - number of members (:int)
 * - an array of party members
 *
 * Party member should have:
 * - name (:string)
 * - age (:int)
 * - party (:Party)
 * - party idx (:int)
 *
 * Knesset should have:
 * - number (:int)
 * - PM (:Party Member)
 * - speaker of the knesset (:Party Member) - cannot also be the PM
 * - an array of parties
 *
 * Supported functionality required:
 * - add a party member to the knesset by party name V
 * - delete a party member from the knesset by party name (TODO)
 * - ensure that the PM is not the speaker of the knesset V
 */

//#include "PartyMember.h"
//#include "Knesset.h"
//#include <iostream>
//
//using namespace std;
//
//int main(){
//    Knesset knesset(10);
//    Party party("together");
//    PartyMember partyMember("Amir", 19);
//    party.addPartyMember(&partyMember);
//    PartyMember partyMember1("Itay", 40);
//    partyMember1.setParty(&party);
//    knesset.addParty(&party);
//    knesset.addPartyMember(&partyMember1);
//
//    cout << knesset.getPartyAtIdx(0)->getMembers()[1]->getName() << endl;
//}