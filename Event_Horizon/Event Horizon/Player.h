#include <string>
#include <vector>
#include "Planet.h"
#include "Timer.h"
using namespace std;

class Player {
public:
	Player(string name, Planet planet) {
		this->name = name;
		this->planets.push_back(planet);
	}

	vector<Planet> getPlanets();
	void addPlanet(Planet planet);

	int getTotalMetal(Timer time);
	int getTotalFood(Timer time);
	int getTotalWater(Timer time);
	int getTotalWood(Timer time);
	int getTotalPop(Timer time);
	int getTotalDip(Timer time);
	int getTotalAmen(Timer time);
private:
	string civName;
	vector<Planet> planets;
	string name;
	int totalMetal;
	int totalFood;
	int totalWater;
	int totalWood;
	int totalPopulation;
	int totalDiplomacy;
	int totalAmenities;
};
