#include <string>
using namespace std;

class Planet {

public:
	string getName() { return this->name; }
	void setName(string name) { this->name = name; }

	int getMetal() { return this->metal; }
	int getFood() {	return this->food;}
	int getWater() { return this->water; }
	int getWood() { return this->wood; }
	int getPop() { return this->population; }
	int getDip() { return this->diplomacy; }
	int getAmen() { return this->amenities; }
private:
	string name;
	int metal;
	int food;
	int water;
	int wood;
	int population;
	int diplomacy;
	int amenities;

};