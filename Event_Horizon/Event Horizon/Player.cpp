//#include "Planet.h"
#include <string>
#include <vector>
#include "Player.h"
using namespace std;

vector<Planet> Player::getPlanets() { return planets; }
void Player::addPlanet(Planet planet) { planets.push_back(planet); }
int Player::getTotalMetal(Timer time) { return (this->totalMetal*this->totalPopulation)/(this->planets.size()*8); }
int Player::getTotalFood(Timer time) { return time*; }
int Player::getTotalWater(Timer time) { return totalWater; }
int Player::getTotalWood(Timer time) { return totalWood*.1; }
int Player::getTotalPop(Timer time) { return totalPopulation; }
int Player::getTotalDip(Timer time) { return totalDiplomacy; }
int Player::getTotalAmen(Timer time) { return totalAmenities; }

	
