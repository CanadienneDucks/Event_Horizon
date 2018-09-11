#include "Timer.h"

void Timer::startTimer() { start = clock(); }
double Timer::getTimer() { return (clock() - start) / (double)CLOCKS_PER_SEC; }
