#include <iostream>
using namespace std;

int playerHealth = 1000, trollHealth = 2000;
bool stillPlaying = true;

void AttackChoice(int choice);
bool PlayState();

int main()
{
	int playerChoice;	
	cout << "A mighty Troll stands before you." << endl;
	while (PlayState())
	{
		cout << "Choose your style of attack" << endl;
		cout << "1. Use Sword\n2. Use Magic\n3. Use Axe" << endl;

		cin >> playerChoice;
		AttackChoice(playerChoice);
	}
	return 0;
}

void AttackChoice(int choice)
{
	const int swordDamage = 300;
	const int magicDamage = 650;
	const int axeDamage = 450;
	const int trollSwordDamage = 300;
	const int trollMagicDamage = 50;
	const int trollAxeDamage = 100;
	switch (choice)
	{
	case 1:
		trollHealth -= swordDamage;
		playerHealth -= trollSwordDamage;
		cout << "You have hit the Troll" << endl;
		cout << "The Troll has hit you" << endl;
		if (playerHealth < 0)
			playerHealth = 0;
		if (trollHealth < 0)
			trollHealth = 0;
		cout << "Player Health - " << playerHealth << endl;
		cout << "Troll Health - " << trollHealth << endl;
		break;
	case 2:
		trollHealth -= magicDamage;
		playerHealth -= trollMagicDamage;
		cout << "You have hit the Troll" << endl;
		cout << "The Troll has hit you" << endl;
		if (playerHealth < 0)
			playerHealth = 0;
		if (trollHealth < 0)
			trollHealth = 0;
		cout << "Player Health - " << playerHealth << endl;
		cout << "Troll Health - " << trollHealth << endl;
		break;
	case 3:
		trollHealth -= axeDamage;
		playerHealth -= trollAxeDamage;
		cout << "You have hit the Troll" << endl;
		cout << "The Troll has hit you" << endl;
		if (playerHealth < 0)
			playerHealth = 0;
		if (trollHealth < 0)
			trollHealth = 0;
		cout << "Player Health - " << playerHealth << endl;
		cout << "Troll Health - " << trollHealth << endl;
		break;
	default:
		break;
	}
}

bool PlayState()
{
	char playAgain;

	if (trollHealth <= 0)
	{
		cout << "You have defeated the Troll and won the battle!" << endl;
		cout << "Play again? y/n" << endl;
		cin >> playAgain;
		if (playAgain == 'y' || playAgain == 'Y')
		{
			playerHealth = 1000;
			trollHealth = 2000;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (playerHealth <= 0)
	{
		cout << "You have been defeated by the Troll and lost the battle!" << endl;
		cout << "Play again? y/n" << endl;
		cin >> playAgain;
		if (playAgain == 'y' || playAgain == 'Y')
		{
			playerHealth = 1000;
			trollHealth = 2000;
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}