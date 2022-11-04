#include <iostream>
#include <algorithm>
#include <random>
using namespace std;

char cards[10] = 
{
	'A' , 'A' , 'B' , 'B' , 'C' , 'C' , 'D' , 'D' , 'E' , 'E'
};
bool cardsFound[5] =
{
	false, false, false, false, false
};
int numOfTries = 0;

void InitialiseDeck();
string DisplayCards();
bool TakeGuess(int cardOne, int cardTwo);

int main()
{
	InitialiseDeck();
	cout << DisplayCards();
}

void InitialiseDeck()
{
	shuffle(cards, cards + 10, default_random_engine(69));
}

string DisplayCards()
{
	string CardDisplay;
	for (int card = 0; card < 10; card++)
	{
		if (card == 5)
		{
			CardDisplay += "\n";
		}
		CardDisplay += "[";
		CardDisplay += cards[card];
		CardDisplay += "]";
	}

	return CardDisplay;
}

bool TakeGuess(int cardOne, int cardTwo)
{
	return false;
}