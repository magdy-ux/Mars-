#pragma once
#include "Event.h"
#include "Mission.h"
class EventF :public Event
{
private:
	int TYP; int ED; int ID; int TLOC; int MDUR; int SIG;
public:
	EventF(int TYP,int ED,int ID,int TLOC,int MDUR,int SIG);
	void Execute();
};
