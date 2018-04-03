#pragma once

#ifdef _DEBUG
#define DEBUG_(a) cout << a << endl;
#else
#define DEBUG_(a)
#endif

class Monitor{

public:
	Monitor();
	
	Monitor(int cale);

	Monitor(double cena, int cale);

	~Monitor();

	operator Monitor();

	int getCale();

	double getCena();

private:
	int cale;
	double cena;
};


