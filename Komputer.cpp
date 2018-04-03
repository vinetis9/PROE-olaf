#include "Komputer.h"
#include <iostream>

#define DEFAULT 1
#define DEFAULTM 222222

using namespace std;
Komputer::Komputer(){

	DEBUG_("Konstruktor domyslny");
	cena = DEFAULT;
	nazwa = "XXXX";
	lmonitorow = DEFAULT;
	wiek = DEFAULT;
	monitory = new Monitor[lmonitorow];
	licznik++;
}

Komputer::Komputer(string nazwa, int cena, int lmonitorow){
	this->cena = cena;
	this->nazwa = nazwa;
	this->lmonitorow = lmonitorow;
	monitory = new Monitor[lmonitorow];	
	DEBUG_("Konstruktor dwa");
	for (int i = 0; i < lmonitorow; i++) {
		monitory[i] = Monitor(DEFAULTM, i);
	}

	licznik++;
}
Komputer::Komputer(int wiek) {
	cena = DEFAULT;
	nazwa = "XXXX";
	lmonitorow = DEFAULT;
	this->wiek = wiek;
	DEBUG_("Konstruktor trzy");
	licznik++;
}

Komputer::Komputer(const Komputer &komp) {
	DEBUG_("Konstruktor kopiujacy");
	cena = komp.cena;
	nazwa = komp.nazwa;
	lmonitorow = komp.lmonitorow;
	if (komp.monitory != nullptr) {
		monitory = new Monitor[lmonitorow];
		for (int i = 0; i < lmonitorow; i++)
			monitory = komp.monitory;
	}

	else
		monitory = nullptr;

	licznik++;
}

Komputer::Komputer(int cena, const Procesor & proc)
{
	DEBUG_("Konstruktor cztery");
	this->cena = cena;
	nazwa = "XXXX";
	lmonitorow = DEFAULT;
	wiek = DEFAULT;

	procesor = proc;
	licznik++;
}




Komputer::~Komputer(){
	DEBUG_("Destruktor komputera");
	licznik--;
}

string Komputer::getNazwa()
{
	return nazwa;
}

int Komputer::getCena()
{
	return cena;
}

int Komputer::getLmonitorow()
{
	return lmonitorow;
}

int Komputer::licznik = 0;

int Komputer::getLicznik(){
	return licznik;
}

void Komputer::setNazwa(string nazwa) {
	this->nazwa = nazwa;

}

void Komputer::setCena(int cena) {
	this->cena = cena;
}

Komputer Komputer::operator+(Komputer &komp)
{
	Komputer suma =*this;
	suma.lmonitorow = lmonitorow + komp.lmonitorow;
	//suma.nazwa = nazwa;
	//suma.cena = cena;
	
	//suma.pamiec = pamiec;
	//suma.procesor = procesor;



	delete[](suma.monitory);
	cout << suma.getLmonitorow();
	suma.monitory = new Monitor[suma.lmonitorow];
	for (int i=0; i < lmonitorow; i++)
		suma.monitory[i] = monitory[i];
	for (int i=0; i < komp.lmonitorow; i++)
		suma.monitory[i + lmonitorow] = komp.monitory[i];

	return suma;
}

bool Komputer::operator== (Komputer &komp){

	if (cena != komp.getCena() || nazwa != komp.getNazwa()) 
		return false;
	
	else
		return true;
}

Komputer &Komputer::operator=(Komputer & komp)
{
	nazwa = komp.nazwa;
	cena = komp.cena;
	lmonitorow = komp.lmonitorow;

	procesor = komp.procesor;
	pamiec = komp.pamiec;
	if(monitory!=NULL)
	delete []monitory;
	monitory = new Monitor[lmonitorow];
	

	for (int i = 0; i < lmonitorow; i++) {
	
		monitory[i] = komp.monitory[i];
	
	
	}
	return *this;

}

Komputer& Komputer::operator++() {
	
	lmonitorow++;
	delete[] monitory;
	monitory = new Monitor[lmonitorow];
	

	return *this;
}


Komputer Komputer::operator++(int) {


	Komputer kopia = *this;
	
	for (int i = 0; i < lmonitorow; i++)
		kopia.monitory[i] = monitory[i];

	lmonitorow++;
	
	delete[] monitory;
	monitory = new Monitor[lmonitorow];
	for (int i = 0; i < lmonitorow - 1; i++)
		monitory[i] = kopia.monitory[i];

	return kopia;



}




bool Komputer::operator>(Komputer &komp) {

	if (wiek > komp.wiek)
		return true;
	else 
		return false;

}

ostream& operator <<(ostream &s, Komputer &komp) {

	s << komp.nazwa << " " << komp.cena << endl;

	return s;

}


istream& operator >>(istream &s, Komputer &komp) {
	int cena;
	string nazwa;

	s >> nazwa >> cena;
	komp.nazwa = nazwa;
	komp.cena = cena;
	return s;

}

Monitor& Komputer::operator[](int el) {
	return monitory[el];
}




