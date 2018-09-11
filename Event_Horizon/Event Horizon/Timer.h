#include <ctime>

class Timer {
public:
	void startTimer();
	double getTimer();
private:
	clock_t start;
};
