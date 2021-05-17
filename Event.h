#pragma once
#include"Defs.h"
#include"linkedqueue.h"
#include"priorityqueue.h"
class Event
{
private:
	int day;
	int ID;
public:
	virtual void Execute()=0;
};
