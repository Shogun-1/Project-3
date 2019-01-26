#include "responses.h"

ostream& operator << (ostream& os, const BusesForStopResponse& r) {
	if (r.stb.count(r.stop) == 0)
	{
		os << "No stop";
		return os;
	}
	bool first = true;
	for (const string& bus : r.stb.at(r.stop))
	{
		if (first)
		{
			os << bus;
			first = false;
		}
		else
		{
			os << " " << bus;
		}
	}
	return os;
}

ostream& operator << (ostream& os, const StopsForBusResponse& r) {
	if (r.bts.count(r.bus) == 0)
	{
		os << "No bus";
		return os;
	}
	vector <string> stops = r.bts.at(r.bus);
	for (const auto& stop : stops)
	{
		os << "Stop " << stop << ":";
		if (r.stb.at(stop).size() == 1)
		{
			os << " no interchange";
		}
		else
		{
			vector <string> buses = r.stb.at(stop);
			for (const string& bus : buses)
			{
				if (r.bus != bus)
				{
					os << " " << bus;
				}
			}
		}
		os << endl;
	}
	return os;
}

ostream& operator << (ostream& os, const AllBusesResponse& r) {
	if (r.bts.size() == 0)
	{
		os << "No buses";
		return os;
	}
	for (const auto& bus : r.bts)
	{
		os << "Bus " << bus.first << ":";
		for (const auto& stop : bus.second)
		{
			os << " " << stop;
		}
		os << endl;
	}
	return os;
}
