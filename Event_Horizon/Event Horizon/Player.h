#include "Planet.h"
#include <string>
#include <vector>
using namespace std;

class Player {
public:
	Player(string name, Planet planet) {
		this->name = name;
		this->planets.push_back(planet);
	}

	int getPlanets();
	void addPlanet(Planet planet);

	int getTotalMetal();
	int getTotalFood();
	int getTotalWater();
	int getTotalWood();
	int getTotalPop();
	int getTotalDip();
	int getTotalAmen();
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
