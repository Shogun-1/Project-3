#include "query.h"

istream& operator >> (istream& is, Query& q) {
  string request;
  is >> request;
  if (request == "NEW_BUS")
  {
	  q.type = QueryType::NewBus;
	  is >> q.bus;
	  int count = 0;
	  is >> count;
	  q.stops.resize(count);
	  for (string& stop : q.stops)
	  {
		  is >> stop;
	  }
  }
  else if (request == "BUSES_FOR_STOP")
  {
	  q.type = QueryType::BusesForStop;
	  is >> q.stop;
  }
  else if (request == "STOPS_FOR_BUS")
  {
	  q.type = QueryType::StopsForBus;
	  is >> q.bus;
  }
  else if (request == "ALL_BUSES")
  {
	  q.type = QueryType::AllBuses;
  }
  return is;
}
