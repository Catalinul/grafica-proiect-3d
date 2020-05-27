#ifndef Proiectil_H
#define Proiectil_H
#include "Obiect.h"
class Proiectil : public Obiect
{
private:
	double rotireProiectil;
	double inclinareProiectil;
public:
	Proiectil(double a, double b, double c, double rg, double ig);
	Proiectil();
	void setRotireProiectil(double a);
	void setInclinareProiectil(double a);
	double getRotireProiectil();
	double getInclinareProiectil();
	void Draw();
	
};

#endif