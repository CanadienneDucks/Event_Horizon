//#include "Planet.h"
#include <string>
#include <vector>
#include "Player.h"
using namespace std;

int Player::getPlanets() { return planets.cend; }
void Player::addPlanet(Planet planet) { planets.push_back(planet); }
int Player::getTotalMetal() { return totalMetal; }
int Player::getTotalFood() { return totalFood; }
int Player::getTotalWater() { return totalWater; }
int Player::getTotalWood() { return totalWood; }
int Player::getTotalPop() { return totalPopulation; }
int Player::getTotalDip() { return totalDiplomacy; }
int Player::getTotalAmen() { return totalAmenities; }

	
