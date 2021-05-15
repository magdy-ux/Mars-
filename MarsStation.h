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
	LinkedList<Mission> MPMissionList;
	LinkedList<Mission> EMissionList;
	LinkedQueue<Rover> RoverList;
public:
	MarsStation();
	void StationInput(LinkedQueue<Event>*);
	void MExecute();

};

