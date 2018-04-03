#include <iostream>	
#include <ctime>
#include <cstdlib>
using namespace std;

/*Write a program that allows the user to enter the grade scored in a programming class (0-100).
If the user scored a 100 then notify the user that they got a perfect score.

1 Modify the program so that if the user scored a 90-100 it informs the user that they scored an A

2 Modify the program so that it will notify the user of their letter grade
0-59 F 60-69 D 70-79 C 80-89 B 90-100 A*/

/*void main()
{
	int nota;
	
	cout << "Nota: ";
	cin >> nota;

	if (nota == 100)
	{
		cout << "Perfect Score!!!" << endl;
	}
	else if (nota >= 90)
	{
		cout << "A" << endl;
	}
	else if (nota >= 80 && nota <= 89)
	{
		cout << "B" << endl;
	}
	else if (nota >= 70 && nota <= 79)
	{
		cout << "C" << endl;
	}
	else if (nota >= 60 && nota <= 69)
	{
		cout << "D" << endl;
	}
	else if (nota <= 59)
	{
		cout << "F" << endl;
	}

	system("pause");
}*/

/*Write a program that ccontinues to asks the user to enter any number other than 5 until the user enters the number 5.
Then tell the user "Hey! you weren't supposed to enter 5!" and exit the program.

1 Modify the program so that after 10 iterations if the user still hasn't entered 5 will tell the user "Wow, you're more patient then I am, you win." and exit.

2  Modify the program so that it asks the user to enter any number other than the number equal to the number of times they've been asked to enter a number. 
(i.e on the first iteration "Please enter any number other than 0" and on the second iteration "Please enter any number other than 1"m etc. etc. The program must 
behave accordingly exiting when the user enters the number they were asked not to.)*/

/*void main()
{
	int n = 0, o = 0, c = 1, s = 0;

	cout << "Write any number other than 5: ";
	cin >> n;

	while (n != 5 && s != 1)
	{
		cout << "Write any number other than 5: ";
		cin >> n;
		c++;
		if (c == 10)
		{
			cout << "wow, you're more patient then I am, you win" << endl;
			s = 1;
		}

	}
	if (n == 5)
	{
		cout << "HEY! You weren't supposed to enter 5!" << endl;
	}
	while (n >= 0)
	{
		cout << "Plese enter any numer other than " << o << " :";
		cin >> n;
		
		if (n == o)
		{
			cout << "Sweet fancy moses, ANY number other than that!" << endl;
			break;
		}
		o++;
	}


	system("pause");
}*/

/*Write a program that calculates a random number 1 through 100. The program then asks the user to guess the number.
If the user guesses too high or too low then the program should output "too high" or "too low" accordingly.
The program must let the user continue to guess until the user correctly guesses the number.

 Modify the program to output how many guesses it took the user to correctly guess the right number.

 Modify the program so that instead of the user guessing a number the computer came up with, the computer guesses the number that the user has secretely decided.
 The user must tell the computer whether it guesed too high or too low.

 Modify the program so that no matter what number the user thinks of (1-100) the computer can guess it in 7 or less guesses.*/

void main()
{
	int n = 0, r = 100, c = 0, g = 0;
	
	//PARTE 1 e 2
	/*srand(time(NULL));

	r = rand() % 100 + 1;
	

	while (n != r)
	{
		cout << "Guess : ";
		cin >> n;

		if (n > r)
		{
			cout << "Too high!" << endl;
		}
		if (n < r)
		{
			cout << "Too low!" << endl;
		}
		c++;
	}
	if (n == r)
	{
		cout << "You guess it right!!" << endl << "with " << c << " tries." << endl;;
	}*/

	//PARTE 3

	srand(time(NULL));

	r = rand() % 101;
	

	while (g != 3)
	{
		
		cout << r << endl;

		cout << "1 - too high \n 2 - too low \n 3 - right \n";
		cin >> g;
		if (g == 1)
		{
			r = rand() % r + 1;
		}
		else if (g == 2)
		{
			r = rand() % (100 - r) + r;
		}
	}

	system("pause");
}