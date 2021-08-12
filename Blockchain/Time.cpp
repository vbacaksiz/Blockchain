#include "Time.h"

Time getTime(Time time, double getMs)
{
	while (getMs >= 1000) {
		time.sec++;
		getMs -= 1000;
	}
	time.ms = getMs;
	while (time.sec >= 60) {
		time.min++;
		time.sec -= 60;
	}
	while (time.min >= 60) {
		time.hour++;
		time.min -= 60;
	}

	return time;
}