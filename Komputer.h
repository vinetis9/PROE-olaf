#pragma once


#include <string>

#include "Procesor.h"
#include "Monitor.h"
#include "PamiecRAM.h"

#ifdef _DEBUG
#define DEBUG_(a) cout << a << endl;
#else
#define DEBUG_(a)
#endif

using namespace std;



class Komputer
{
public:

	Komputer();
	Komputer(string nazwa, int cena, int lmonitorow);
	Komputer(int wiek);
	Komputer(const Komputer &komp);
	Komputer(int cena, const Procesor &procesor);
	~Komputer();

	string getNazwa();
	int getCena();
	int getLmonitorow();
	void setNazwa(string);
	void setCena(int);
	static int getLicznik();

	Komputer operator+(Komputer &komp);
	bool operator==(Komputer &komp);
	Komputer &operator=(Komputer &komp);
	Komputer &operator++();
	Komputer operator++(int);
	bool operator>(Komputer &komp);
	friend ostream& operator <<(ostream &s, Komputer &komp);
	friend istream& operator >>(istream &s, Komputer &komp);
	Monitor& operator[](int el);
	

private:
	string nazwa;
	int cena;
	int lmonitorow;
	int wiek;
	static int licznik;
	 
	PamiecRam pamiec;
	Procesor procesor;
	Monitor *monitory;

};





