# Project-3
A reference guide, that can be used to store the information about buses and their stops; a multifile project

**IMPORTANT** Before typing any commands, type their quantity, i.e.:
3
NEW_BUS 50 2 STOP1 STOP2
BUSES_FOR_STOP STOP1
ALL_BUSES
---END OF THE PROGRAM---

Output:
50
Bus 50: STOP1 STOP2

*Available commands*:
1) NEW_BUS ***bus*** ***stop_count*** ***stop_1*** ***stop_2*** ... Adding new route to the reference guide for ***bus*** with ***stop_count*** stops: ***stop_1*** ***stop_2*** etc
2) BUSES_FOR_STOP ***stop*** Printing all bus numbers, that pass through specified ***stop***
3) STOPS_FOR_BUS ***bus*** Printing all stops for specified ***bus*** with interchanges (if available) for every stop
4) ALL_BUSES Printing all buses with their routes
