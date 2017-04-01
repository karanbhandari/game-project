/*
 * Spell.cc
 *
 *  Created on: Mar 23, 2017
 *      Author: Acer User
 */
#include <iostream>
#include <string>
#include <sstream>
#include "Spells.h"
#include "Player.h"
#include "Ability.h"

using namespace std;

Spell::Spell(const string &name, int cost, Ability *myAbility) :
		name(name), cost(cost), spellAbility(myAbility) {
}

Spell::~Spell(){
	delete spellAbility;
	spellAbility = nullptr;
}

//bool Spell::canActivate() {
	//return spellPlayer->getMagic() >= cost;
//}

void Spell::activate() {
	//if (canActivate()) {
		//spellPlayer->changeMagic(-(cost));
		spellAbility->performAbility();
		moveToGrave();
	//} else
	//	throw "not enough mana";
}

void Spell::moveToGrave() {
	// move to graveyard
}

void Spell::addToBoard(Card *ritualSlot, Card *MinionCardForEnch, Slot *slot) {
	// Performs ability and then deletes the card.. See TODO in this file 
	// TODO: perform ability
	delete this;
}
