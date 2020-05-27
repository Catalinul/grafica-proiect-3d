#ifndef Jucarie_H
#define Jucarie_H
#include "Obiect.h"

class Jucarie : public Obiect
{
private:
	double rotireTun;
	double inclinareTun;
	double rotireJucarie;
public:
	Jucarie(double a, double b, double c, double rt, double it,double rotireJucarie);
	Jucarie();
	void setRotireTun(double);
	void setInclinareTun(double);
	void setRotireJucarie(double);
	double getRotireTun();
	double getInclinareTun();
	double getRotireJucarie();
	void Draw();
};

#endif

