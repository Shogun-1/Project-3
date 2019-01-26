#include "bus_manager.h"

// BusManager class definitions
void BusManager::AddBus(const string& bus, const vector<string>& stops) {
	  bus_to_stops[bus] = stops;
	  for (const auto& stop : stops)
	  {
		  stop_to_buses[stop].push_back(bus);
	  }
  }

BusesForStopResponse BusManager::GetBusesForStop(const string& stop) const {
	  return {stop, stop_to_buses};
  }

StopsForBusResponse BusManager::GetStopsForBus(const string& bus) const {
	  return {bus, bus_to_stops, stop_to_buses};
  }

AllBusesResponse BusManager::GetAllBuses() const {
	  return {bus_to_stops};
  }
