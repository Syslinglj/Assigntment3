#include <iostream>
#include "Header.h"
#include <string>
using namespace std;

int main()
{
	int nFavorites = 0;
	char input = 'y';
	int counter = 0;
	cout << "Welcome to our favorite car collection database." << endl;
	cout << "We will first ask how many new favorites you would like to add," << endl;
	cout << "then you will provide those favorites with details." << endl;
	cout << " " << endl;

	Favorites *pFavorites = NULL;

	while (input != 'q' && input != 'Q')
	{
		pFavorites = new Favorites[100];
		int inputFavorites = 0;
		

		//asks how many favorites youd like to add
		if (input == 'y' || input == 'Y')
		{
			cout << "How many favorites would you like to enter?  ";
			cin >> inputFavorites;
			cin.ignore();
			cout << endl;
			nFavorites += inputFavorites;
			cout << nFavorites << endl;
			cout << counter << endl;
			//asks user for favorites input
			for (counter; counter < nFavorites; counter++)
			{
				pFavorites[counter].getFavorites();
			}
		}
		system("pause");
		//asks to list, repeat to add more, or quit program
		cout << "For a list of favorites type L, to add more favorites type Y, to quit type Q. ";
		cin >> input;
		cout << " " << endl;

		//lists favorites
		if (input == 'l' || input == 'L')
		{
			for (int k = 0; k < nFavorites; k++)
			{

				pFavorites[k].showFavorites();

			}

			cout << "To add more favorites type Y, to quite type Q.";
			cin >> input;
			cout << " " << endl;
			system("CLS");
		}
	}
	delete[] pFavorites;
	return 0;
}