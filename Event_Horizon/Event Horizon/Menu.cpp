#include <iostream>
#include < string>
#include "Game.h"
using namespace std;

void CreateGame() {

	string civName; 

	int count = 5; 
	int input; 

	int metal = 1;
	int food = 1;
	int water = 1;
	int population = 1;
	int wood = 1;
	int diplomacy = 1;
	int amenaties = 1;

	cout << "You are the ruler of a new civilization. What is your civilization's name?" << endl;
	cin >> civName;
	cout << "Your planet has 5 points that can be put into special catagories. Select where you want your points to go." << endl;

	LOOP:while (count > 0) {
		cout << "1- Metal" << endl;
		cout << "2- Food" << endl;
		cout << "3- Water" << endl;
		cout << "4- Population" << endl;
		cout << "5- Wood" << endl;
		cout << "6- Diplomacy" << endl;
		cout << "7- Amenities" << endl;

		cin >> input;

		if (!cin.fail()) {

			if (input == 1)
				metal++;
			else if (input == 2)
				food++;
			else if (input == 3)
				water++;
			else if (input == 4)
				population++;
			else if (input == 5)
				wood++;
			else if (input == 6)
				diplomacy++;
			else if (input == 7)
				amenaties++;
			else {
				cout << "Not a proper input" << endl;
				goto LOOP;
			}
			count--;
		}
		else {
			cout << "Not a proper input" << endl;
			cin.clear();
			cin.ignore(256, '\n');
		}

	}

		 Game();

}

int main(){
	
	int input;
	do {
		cout << "Welcome to Event Horizon!" << endl;
		cout << "1- Play Game" << endl;
		cout << "2- Load Game" << endl;
		cout << "3- View Past Games" << endl;
		cout << "4- Quit" << endl;
		cin >> input;

		if (!cin.fail()) {

			

			if (input == 1)
				CreateGame();
			else if (input == 2)
				cout << "Function not available yet" << endl;
			else if (input == 3)
				cout << "Function not available yet" << endl;
			else if (input == 4)
				cout << "Goodbye" << endl;
			else 
				cout << "Not a proper input" << endl;
		}
		else {
			cout << "Not a proper input" << endl;
			cin.clear();
			cin.ignore(256, '\n');
		}
	} while (input != 4);

	system("pause");
	return 0;
}