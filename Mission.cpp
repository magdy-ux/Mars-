#include "Mission.h"
Mission::Mission(int a, int c, int d, int e, int f)
{
	TYP = a;
	ID = c;
	TLOC = d;
	MDUR = e;
	SIG = f;
}
int Mission::gettype()
{
	return TYP;
}
