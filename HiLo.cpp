// C++ Program			HiLo.cpp
// Course				CSE1311/W01
// Name:				Hakeem Wilson
// Assignment #:		Project 2
// Due Date:			03/10/2019

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	//Variables
	int guess = 0, num, count;
	unsigned int seed;
	char response;

	//Random Generator
	seed = time(0);
	srand(seed);

	do
	{
		//Opening Output
		cout << "Welcome to a game of HiLo!" << endl;
		cout << endl;
		cout << "A random number will be generated!" << endl;
		cout << endl;
		cout << "You must guess that random number!" << endl;
		cout << endl;
		cout << "The progream will tell you whether you are too high or too low!" << endl;
		cout << endl;
		cout << "Keep guessing until you get it right!" << endl;
		cout << endl;
		cout << "Or type -1 to quit early!" << endl;
		cout << endl;

		num = rand() % 100 + 1;
		count = 0;

		//While Loop
		while (guess != num)
		{
			cout << "Take a guess!" << endl;
			cin >> guess;
			++count;
			if (guess == -1)
			{
				cout << "This was coded by Hakeem Wilson" << endl;
				system("PAUSE");
				return 0;
			}
			else if (guess < 1 || guess > 100)
			{
				cout << "Out of Range" << endl;
			}
			else if (guess == num)
			{
				cout << "You guessed correctly!" << endl;
				cout << endl;
				cout << "You guessed " << count << " times" << endl;
				cout << endl;
				cout << "Would you like to play again? (Y/N)" << endl;
				cin >> response;
			}
			else if (guess < num)
			{
				cout << "Too low!" << endl;
			}
			else if (guess > num)
			{
				cout << "Too high!" << endl;
			}
		}
	} while (response == 'Y' || 'y');

	cout << "This was coded by Hakeem Wilson" << endl;
	system("PAUSE");
	return 0;
}
