#include "MarsStation.h"
#include "Mission.h"
#include "Event.h"
#include "EventF.h"
MarsStation::MarsStation()
{

}
void MarsStation::StationInput(LinkedQueue<Event>*)
{

}
void MarsStation::MExecute()
{
	EventF E;
	bool b = EventList.peek(E);
	if (b && CurrentDay == E.getday())
	{
		EventList.dequeue(E);
		E.Execute();
		Mission* M = E.getMission();
		if (M->gettype() == 3)
			EMissionList.InsertEnd(*M);//priority needed
		else
			PMissionList.InsertEnd(*M);
	}
}
void MarsStation::Assign()
{
	if (EMissionList.peek())
	{
		Mission* M = EMissionList.peek();
		if (M->gettype() == 1)//Polar
		{
			Rover R;
			if (!PRoverList.isEmpty())
			{
				PRoverList.dequeue(R);
				InExRovers.enqueue(R);
				PMissionList.dequeue(R);
				InExMissions.enqueue(R);
			}
		}
		if (M->gettype() == 2)//Emergency
		{

		}
	}
}
