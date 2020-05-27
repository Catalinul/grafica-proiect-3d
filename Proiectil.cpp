#include "Proiectil.h"
#include "Obiect.h"
#include <gl/freeglut.h>
#include <cmath>

#define PI 3.14159265

Proiectil::Proiectil(double a, double b, double c, double rg, double ig) : Obiect(a, b, c)
{
	rotireProiectil = rg;
	inclinareProiectil = ig;
}

Proiectil::Proiectil() :Obiect() {}

void Proiectil::setRotireProiectil(double a)
{
	rotireProiectil = a;
}

void Proiectil::setInclinareProiectil(double a)
{
	inclinareProiectil = a;
}

double Proiectil::getRotireProiectil()
{
	return rotireProiectil;
}

double Proiectil::getInclinareProiectil()
{
	return inclinareProiectil;
}

void Proiectil::Draw()
{
	glPushMatrix();
		glTranslated(getx(), gety(), getz());
		glColor3f(1, 1, 0);
		glutSolidSphere(0.2, 20, 20);
	glPopMatrix();
	setx(getx() - sin((inclinareProiectil + 90) * PI / 180.0)*cos((rotireProiectil + 90) * PI / 180.0)/3) ;
	setz(getz() + sin((inclinareProiectil + 90) * PI / 180.0)*sin((rotireProiectil + 90) * PI / 180.0)/3) ;
	sety(gety() + cos((inclinareProiectil + 90) * PI / 180.0)/3);
}
