#pragma once
class Event
{
private:
	int day;
	int ID;
public:
	virtual void Execute()=0;
};