#pragma once
#include"Defs.h"
class Rover
{
  virtual int getid()=0;
	virtual void setid(int x) =0 ;
	virtual void setspeed(int)=0;
	virtual int getspeed()=0;
	virtual int getcheckupdayes()=0;
	virtual void setcheckupdayes(int c)=0;
	virtual rovertype gettype() = 0;
	virtual void settype(rovertype r) = 0;
	virtual int getwattingdays()=0;
	virtual void setwaittingdays(int c)=0;
};

