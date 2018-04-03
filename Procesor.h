#pragma once


#ifdef _DEBUG
#define DEBUG_(a) cout << a << endl;
#else
#define DEBUG_(a)
#endif

class Procesor
{
public:
	Procesor();
	~Procesor();

	int getTaktowanie();

private:
		int taktowanie;
	
};

