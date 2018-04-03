#include "Monitor.h"
#include <iostream>

using namespace std;



Monitor::Monitor()
{
	
	DEBUG_("Konstruktor domyslny dla monitora");
}

Monitor::Monitor(double cena, int cale) 
{
	this->cale = cale;
	this->cena = cena;
	DEBUG_("Konstruktor dwa dla monitora");

}

Monitor::Monitor(int cale)
{
	this->cale = cale;
	DEBUG_("Konstruktor trzy dla monitora");

}


Monitor::~Monitor()
{
	DEBUG_("Destruktor dla monitora");
}

Monitor::operator Monitor() {

	return cale;
}


int Monitor::getCale()
{
	return cale;
}

double Monitor::getCena()
{
	return cena;
}


