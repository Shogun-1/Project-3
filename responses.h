#pragma once

#include <string>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

struct BusesForStopResponse {
	string stop;
	map <string, vector <string>> stb;
};

ostream& operator << (ostream& os, const BusesForStopResponse& r);

struct StopsForBusResponse {
	string bus;
	map <string, vector <string>> bts;
	map <string, vector <string>> stb;
};

ostream& operator << (ostream& os, const StopsForBusResponse& r);

struct AllBusesResponse {
	map <string, vector <string>> bts;
};

ostream& operator << (ostream& os, const AllBusesResponse& r);
