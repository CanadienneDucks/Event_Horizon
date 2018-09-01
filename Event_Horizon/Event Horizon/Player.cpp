#include "Planet.cpp"
#include <string>
#include <vector>
using namespace std;

class Player {
public:
	vector<Planet> getPlanets() { return planets; }
private:
	string civName;
	vector<Planet> planets;
};