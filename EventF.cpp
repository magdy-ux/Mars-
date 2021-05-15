#include "EventF.h"
#include "Mission.h"
EventF::EventF(int a,int b,int c,int d,int e,int f)
{
	TYP = a; ED = b; ID = c;  TLOC = d;  MDUR = e;  SIG = f; M =nullptr;
}
void EventF::Execute()
{
	M=new Mission(TYP, ID, TLOC, MDUR, SIG);
}
Mission* EventF::getMission()
{
	return M;
}
int EventF::getday()
{
	return ED;
}
