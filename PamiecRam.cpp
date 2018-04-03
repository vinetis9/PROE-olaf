#include "PamiecRam.h"
#include <iostream>

using namespace std;

PamiecRam::PamiecRam()
{

	DEBUG_("Konstruktor domyslny dla PamiecRam");
}

PamiecRam::PamiecRam(int pojemnosc)
{
	this->pojemnosc = pojemnosc;

	DEBUG_("Konstruktor dwa dla pamieci RAM");
}


PamiecRam::~PamiecRam()
{
	DEBUG_("Destruktor domyslny dla pamieci RAM");
}
