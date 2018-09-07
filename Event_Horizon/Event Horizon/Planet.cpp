#include "Planet.h"

Planet::Planet(string name, int metal, int food, int water, int wood, int pop, int dip, int amen) {
	this->name = name;
	this->metalMultiplier = metal;
	this->foodMultiplier = food;
	this->waterMultiplier = water;
	this->woodMultiplier = wood;
	this->populationMultiplier = pop;
	this->diplomacyMultiplier = dip;
	this->amenitiesMultiplier = amen;
}

string Planet::getName() { return this->name; }
void Planet::setName(string name) { this->name = name; }

int Planet::getMetalMultiplier() { return this->metalMultiplier; }
int Planet::getFoodMultiplier() {	return this->foodMultiplier;}
int Planet::getWaterMultiplier() { return this->waterMultiplier; }
int Planet::getWoodMultiplier() { return this->woodMultiplier; }
int Planet::getPopMultiplier() { return this->populationMultiplier; }
int Planet::getDipMultiplier() { return this->diplomacyMultiplier; }
int Planet::getAmenMultiplier() { return this->amenitiesMultiplier; }
