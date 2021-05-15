#pragma once
#include "MarsStation.h"
class UI
{
private:
	MarsStation* MS;
public:
	UI();
	MarsStation* input();
	void output();
};

