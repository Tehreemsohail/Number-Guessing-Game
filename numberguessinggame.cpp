#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int numbertoguess;
	numbertoguess = (rand()%100);

	cout << "******NUMBER GUESSING GAME******"<<endl;
	int guess;

	do
	{
		cout << "Enter your guess: ";
		cin >> guess;

		if (guess > numbertoguess)
		{
			cout << "Your guess is higher. Try a smaller number."<<endl;
		}

		else if (guess < numbertoguess)
		{
			cout << "Your guess is smaller. Try a higher number."<<endl;
		}

		else if (guess == numbertoguess)
		{
			cout << "Well done! You've guessed the Number."<<endl;
		}

	} while (guess != numbertoguess);

	return 0;
}