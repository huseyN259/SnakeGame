#include <iostream>
#include <windows.h>
#include <iomanip>
#include <conio.h>

using namespace std;

#include "enum.h"
#include "setOfGame.h"
#include "functions.h"

int main()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	char ch;
	cout << endl;
	cout << setw(85) << "Welcome to SNAKE GAME\n\nPlease wait..." << endl;
	Sleep(3000);
	system("cls");

	cout << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << setw(70) << "Hard Mode -> H" << endl;
	cout << setw(70) << "Easy Mode -> E" << endl;
	cout << setw(70) << "\t\tControls -> W, A, S, D" << endl;
	cout << setw(70) << "\t\Stop Game -> X" << endl;
	cin >> ch;
	switch (ch)
	{
	case 'E':
	case 'e':
		setup();
		while (!gameOver)
		{
			Draw();
			Input();
			Logic();
			Sleep(30);
		}
		break;
	case 'H':
	case 'h':
		setup();
		while (!gameOver)
		{
			Draw();
			Input();
			Logic2();
			Sleep(30);
		}
		break;
	default:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\n" << setw(80) << "Wrong input, Try again !";
		break;
	}

	_getch();

	return 0;
}