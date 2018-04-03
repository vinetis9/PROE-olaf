#pragma once

#ifdef _DEBUG
#define DEBUG_(a) cout << a << endl;
#else
#define DEBUG_(a)
#endif

#include <iostream>

class PamiecRam
{
public:
	PamiecRam();
	PamiecRam(int pojemnosc);
	~PamiecRam();

private:
	int pojemnosc;
};

