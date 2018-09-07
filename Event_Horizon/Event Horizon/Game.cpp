#include <iostream>
#include "Player.h"

#include <vector>
using namespace std;

void Game(Player player) {
	
	int input;
	vector<int> test;
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);

	cout << "Game called" << endl;
	cout << "1- Buy" << endl;
	cout << "2- Sell" << endl;
	cout << "3- Planets" << endl;
	cin >> input;

	if (input == 1) {
		cout << "Function not available yet" << endl;
	}
	else if (input == 2) {
		cout << "Function not available yet" << endl;
	}
	else if (input == 3) {
		for (int i = 0; i < player.getPlanets; i++) {
			cout << i << endl;
		}
	}

	//Player player = new Player();
	

}

