#include "Procesor.h"
#include <iostream>

using namespace std;


Procesor::Procesor()
{
	DEBUG_("Konstruktor domyslny dla Procesor");
}


Procesor::~Procesor()
{
	DEBUG_("Destruktor dla Procesor");
}

int Procesor::getTaktowanie()
{
	return taktowanie;
}
