#include "MarsStation.h"
#include "Event.h"
#include "EventF.h"
#include "EventP.h"
#include "EventC.h"
MarsStation::MarsStation()
{

}
void MarsStation::StationInput(LinkedQueue<Event>*)
{

}
void MarsStation::MExecute()
{
	while (true)//dummy condition//
	{
		Event *E;
		if (dynamic_cast<EventF*>(E))
		{
			EventF Ef;
			bool b = EventList.peek(Ef);
			if (b && CurrentDay == Ef.getday())
			{
				EventList.dequeue(Ef);
				Ef.Execute();
				Mission* M = Ef.getMission();
				if (M->gettype() == 3)
					EMissionList.InsertEnd(*M);//priority needed
				else
					MPMissionList.InsertEnd(*M);
			}
		}
	}
}
