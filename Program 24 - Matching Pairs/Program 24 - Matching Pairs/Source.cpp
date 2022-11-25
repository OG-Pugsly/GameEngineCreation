#include <iostream>
#include <random>
#include <string>

using namespace std;
char cards[10] = 
{
	'A' , 'A' , 'B' , 'B' , 'C' , 'C' , 'D' , 'D' , 'E' , 'E'
};
bool cardsFound[10] =
{
	false, false, false, false, false, false, false, false, false, false
};
int numOfTries = 0;
void InitialiseDeck();
string DisplayCards();
void TakeGuess(int cardOne, int cardTwo);
void CheckScore();
bool gameComplete = false;
int numOfGuesses = 0;

int main()
{
	system("color 0a");
	InitialiseDeck();
	int guessOne;
	int guessTwo;
	
	while (!gameComplete)
	{
		cout << DisplayCards() << endl;
		cout << "Pick a card! (Choose a number between 1 and 10)" << endl;
		cin >> guessOne;
		if (guessOne < 1 || guessOne > 10)
			cout << "Hear me now! Use a number between 1 and 10..." << endl;
		cout << "Pick a card!" << endl;
		cin >> guessTwo;
		if (guessTwo < 1 || guessTwo > 10)
			cout << "Hear me now! Use a number between 1 and 10..." << endl;
		cout << endl;
		
		TakeGuess(guessOne, guessTwo);
		CheckScore();
	}
	if (gameComplete)
	{
		string winString = "You won kiddo! It took ";
		winString += to_string(numOfGuesses);
		winString += " attempts.";
		cout << winString << endl;
		return 0;
	}
}
void InitialiseDeck()
{
	srand(time_t(NULL));
	int seed = rand() % 69696969;
	shuffle(cards, cards + 10, default_random_engine(seed));
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
		if (cardsFound[card] == true)
		{
				CardDisplay += cards[card];
		}
		else
		{
				CardDisplay += "X";
		}

		CardDisplay += "]";
	}
	return CardDisplay;
}
void TakeGuess(int cardOne, int cardTwo)
{
	numOfGuesses++;
	system("cls");

	if (cardOne == cardTwo)
	{
		cout << "Choose two different cards!" << endl;
	}
	else if (cards[cardOne-1] == cards[cardTwo-1])
	{
		cout << "Breh be correct my man!" << endl;
		cardsFound[cardOne - 1] = true;
		cardsFound[cardTwo - 1] = true;
	}
	else
	{
		cout << "Oof my man, Game face brah!" << endl;
	}
	DisplayCards();
}
void CheckScore()
{
	int numberCorrect = 0;
	for (int correctAnswers = 0; correctAnswers < size(cardsFound); correctAnswers++)
	{
		if (cardsFound[correctAnswers] == true)
		{
			numberCorrect += 1;
		}
		if (numberCorrect == 10)
		{
			gameComplete = true;
		}
	}
}