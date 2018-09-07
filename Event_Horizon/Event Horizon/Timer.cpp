#include <ctime>
class Timer {
public:
	void startTimer() {start = clock();}
	double getTimer() { return (clock() - start) / (double)CLOCKS_PER_SEC; }
private:
	clock_t start;
};

