#include <iostream>
using namespace std;

int main()
{
	int rain = 1;
	int snow = 2;

	int selectedWeather;
	int currentTemperature;

	cout << "Please confirm the current weather. 1 for rain, 2 for snow or anything else for Clear skies" << endl;
	cin >> selectedWeather;
	cout << "Please confirm the current temperature in celsius" << endl;
	cin >> currentTemperature;

	if (selectedWeather == 1)
	{
		if (currentTemperature > 15)
		{
			cout << "Pop on a wee light raincoat" << endl;
		}
		else
		{
			cout << "Bust out the thiccccccccc boi coat today my friend" << endl;
		}
	}
	else if (selectedWeather == 2)
	{
		if (currentTemperature > 0)
		{
			if (currentTemperature > 5)
			{
				cout << "Breh best slap on something warm" << endl;
			}
			else
			{
				cout << "It's chilly bro, wrap up well now" << endl;
			}
		}
		else
		{
			cout << "Hella cold outside, stay indoors!" << endl;
		}
	}
	else
	{
		cout << "Have a splendid day, no rain or snow in sight!" << endl;
	}
}