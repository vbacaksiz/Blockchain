#pragma once

struct Time {
	double ms = 0;
	int sec = 0;
	int min = 0;
	int hour = 0;
};

Time getTime(Time time, double getMs);