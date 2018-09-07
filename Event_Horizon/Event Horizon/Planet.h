#include <string>
using namespace std;

class Planet {

public:
	Planet(string name, int metal, int food, int water, int wood, int pop, int dip, int amen);

	string getName();
	void setName(string name);

	int getMetalMultiplier();
	int getFoodMultiplier();
	int getWaterMultiplier();
	int getWoodMultiplier();
	int getPopMultiplier();
	int getDipMultiplier();
	int getAmenMultiplier();
private:
	string name;
	int metalMultiplier;
	int foodMultiplier;
	int waterMultiplier;
	int woodMultiplier;
	int populationMultiplier;
	int diplomacyMultiplier;
	int amenitiesMultiplier;

};
