#include <string>
#include <iostream>
#include "card.h"
using namespace std;
int main()
{
	string suitcard[] = { "Hearts","Diamonds", "Clubs", "Spades" };
	string rankcard[] = { "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
	card card;
	card.rank = rankcard[1];
	card.suit = suitcard[2];
	cout << "Card: " << card.rank << " & " << card.suit;
	return 0;
}