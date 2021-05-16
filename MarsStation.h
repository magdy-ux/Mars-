#pragma once
#include "linkedqueue.h"
#include "Linkedlist.h"
#include "Event.h"
#include "Mission.h"
#include"Rover.h"
#include "UI.h"
class MarsStation
{
private:
	int CurrentDay;
	UI UserI;
	LinkedQueue<Event> EventList;
	LinkedList<Mission> PMissionList;
	LinkedList<Mission> EMissionList;
	LinkedList<Mission> InExMissions;
	LinkedQueue<Rover> PRoverList;
	LinkedQueue<Rover> ERoverList;
	LinkedQueue<Rover> InExRovers;
public:
	MarsStation();
	void StationInput(LinkedQueue<Event>*);
	void MExecute();
	void Assign();
};

