#include <iostream>
#include "Player.h"
//#include "Timer.h"
#include <vector>
using namespace std;

void listPlanets(Player player);
void showResources(Planet planet);
void listResources(Player player, Timer time);



void Game(Player player) {
	
	int input;
	bool gameOn = true;
	Timer time;

	time.startTimer();

	while (gameOn) {
		cout << "Game called" << endl;
		cout << "1- Buy" << endl;
		cout << "2- Sell" << endl;
		cout << "3- Planets" << endl;
		cout << "4- Resources" << endl;
		cin >> input;

		if (input == 1) {
			cout << "Function not available yet" << endl;
		}
		else if (input == 2) {
			cout << "Function not available yet" << endl;
		}
		else if (input == 3) {
			listPlanets(player);
		}
		else if (input == 4) {
			listResources(player, time);
		}
	}
	

}

void listPlanets(Player player) {

	int planetCounter;
	int planetChoice;
	int input;

	for (planetCounter = 0; planetCounter < player.getPlanets().size(); planetCounter++) {
		cout << planetCounter + 1 << "- " << player.getPlanets().at(planetCounter).getName() << endl;
	}
	cout << planetCounter + 1 << "- Exit" << endl;
	cin >> planetChoice;

	if (planetChoice != planetCounter + 1) {

		cout << "1- Show Resource Multipliers" << endl;
		cout << "2- Exit" << endl;

		cin >> input;
		if (input == 1) {
			showResources(player.getPlanets().at(planetChoice - 1));
		}
	}
}

void showResources(Planet planet) {
	cout << "Metal Multiplier: " << planet.getMetalMultiplier() << endl;
	cout << "Food Multiplier:: " << planet.getFoodMultiplier() << endl;
	cout << "Water Multiplier:: " << planet.getWaterMultiplier() << endl;
	cout << "Population Multiplier:: " << planet.getPopMultiplier() << endl;
	cout << "Wood Multiplier:: " << planet.getWoodMultiplier() << endl;
	cout << "Diplomacy Multiplier:: " << planet.getDipMultiplier() << endl;
	cout << "Amenities Multiplier:: " << planet.getAmenMultiplier() << endl;
}

void listResources(Player player, Timer time) {
	cout << "Metal: " << player.getTotalMetal(time) << endl;
	cout << "Food: " << player.getTotalFood(time) << endl;
	cout << "Water: " << player.getTotalWater(time) << endl;
	cout << "Population: " << player.getTotalPop(time) << endl;
	cout << "Wood: " << player.getTotalWood(time) << endl;
	cout << "Diplomacy: " << player.getTotalDip(time) << endl;
	cout << "Amenaties: " << player.getTotalAmen(time) << endl;
}
