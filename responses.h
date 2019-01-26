#pragma once

#include <string>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

// 3 structs for queries, that require output
struct BusesForStopResponse {
	string stop;
	map <string, vector <string>> stb; // stops to buses
};

ostream& operator << (ostream& os, const BusesForStopResponse& r);

struct StopsForBusResponse {
	string bus;
	map <string, vector <string>> bts; // buses to stops
	map <string, vector <string>> stb; // stops to buses
};

ostream& operator << (ostream& os, const StopsForBusResponse& r);

struct AllBusesResponse {
	map <string, vector <string>> bts; // buses to stops
};

ostream& operator << (ostream& os, const AllBusesResponse& r);
