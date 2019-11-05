#include "Header.h"
#include <string>
#include <iostream>
using namespace std;

Favorites::Favorites()
{
	make = "";
	model = "";
	color = "";
	cost = 0;
	horsepower = 0;
}
Favorites::Favorites(string m, string mo, string c, int cst, int hp)
{
	make = m;
	model = mo;
	color = c;
	cost = cst;
	horsepower = hp;
}
void Favorites::getFavorites()
{
	cout << "Car make? ";
	getline(cin, make);
	cout << endl;
	cout << "Car model? ";
	getline(cin, model);
	cout << endl;
	cout << "Car color? ";
	getline(cin, color);
	cout << endl;
	cout << "Car cost? ";
	cin >> cost;
	cin.ignore();
	cout << endl;
	cout << "Car horsepower? ";
	cin >> horsepower;
	cin.ignore();
	cout << endl;
	
}

void Favorites::showFavorites()
{
	cout << " Make: " << make;
	cout << ", Model: " << model;
	cout << ", Color: " << color;
	cout << ", Cost: " << cost;
	cout << ", Horsepower: " << horsepower;
	cout << endl;
}