#pragma once
#include"Defs.h"
class Mission
{
private:
	missiontype TYP;
	int ID;
	int TLOC;
	int MDUR;
	int SIG;
public:
	Mission(int a, int c, int d, int e, int f);
	int gettype();
};
