#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>
#include <iostream>
#include <sstream>

#include "Deck.h"
#include "Card.h"
#include "Ritual.h"

class Minion;

class Player {
	std::string name;
	int magic;
	//int life;
	Hand *hand;
	Slot *slot;
	Deck *deck;
	Graveyard *graveyard;
	Card *ritual;
public:
	int life; // TODO: make private
	Player(std::string myName, std::istream *in);
	~Player();
	int getMagic();
	void changeMagic(int change);
	void changeLife(int change);
	void draw();
	void performStartTrigger(Player *activePlayer, Player *opponent);
	void performEndTrigger(Player *activePlayer, Player *opponent);
	void performMinionEnter(Minion *minion, Player *activePlayer, Player *opponent);
	void performMinionLeave(Minion *minion, Player *activePlayer, Player *opponent);
	void discard(int i);
	void attack(int i, Player* opponent);
	void attack(int i, Player* opponent, int j, Player *activePlayer);
	void play(int i, Player *, Player*);
	void play(int i, Player *p, int j, Player*, Player *);
	void use(int, Player *, Player*);
	void use(int, Player *, int, Player*, Player*);
	std::string getName();
	bool isAlive();
	void updateSlot(int attack, int defence);
	// Not needed anymore @Karan
  	void addCard(std::string place, Card *card);
 	void removeCard(int minionNum);
	void showHand();
	void showDeck();
 	void returnMinionToHand(int minionNum, Minion *minion);
 	void destroyTopEnchantment(int minionNum);
 	void raiseTheDead();
 	void updateRitual(int charge);
 	int powerOfRitual();
 	void removeRitual();
	void moveToGraveyard();
	void deleteRitual();
	Hand* getHand();
 	Slot * getSlot();
 	Deck * getDeck();
 	Graveyard *getGraveyard();
 	Ritual* getRitual();
};


#endif
