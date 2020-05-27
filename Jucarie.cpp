#include "Jucarie.h"
#include "Obiect.h"
#include <gl/freeglut.h>
#include <cmath>

Jucarie::Jucarie(double a, double b, double c, double rtun, double itun,double rtank) : Obiect(a, b, c)
{
	rotireTun = rtun;
	inclinareTun = itun;
	rotireJucarie = rtank;

}

Jucarie::Jucarie() :Obiect() {}

void Jucarie::setRotireTun(double rtun)
{
	rotireTun = rtun;
}

void Jucarie::setInclinareTun(double itun)
{
	inclinareTun = itun;
}

void Jucarie::setRotireJucarie(double rtank)
{
	rotireJucarie = rtank;
}

double Jucarie::getRotireTun()
{
	return rotireTun;
}

double Jucarie::getInclinareTun()
{
	return inclinareTun;
}

double Jucarie::getRotireJucarie()
{
	return rotireJucarie;
}

void Jucarie::Draw()
{

	glPushMatrix();
		glTranslated(getx(), gety(), getz());
		glColor3f(1, 1, 0);
		glutSolidSphere(0.3, 20, 20);
		glColor3f(1, 0.0, 0);
		glPushMatrix();
			glTranslated(0, -0.9, 0);
			glRotated(rotireJucarie, 0, 1, 0);
			glutSolidCube(1.5);
		glPopMatrix();
		glPushMatrix();
			glRotated(rotireTun, 0, 1, 0);
			glRotated(inclinareTun, 1, 0, 0);
			glColor3f(0.57, 0.38, 0);
			glutSolidCylinder(0.05, 1, 20, 20);
		glPopMatrix();
	glPopMatrix();
	
}

