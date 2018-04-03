#include "Komputer.h"
#include "Monitor.h"
#include "TestyPozostale.h"
#include <iostream>

using namespace std;



void TestyPozostale::testKonstruktorow() {
	cout << "TEST KONSTRUKTORA DOMYSLNEGO KOMPUTERA: " << endl;
	Komputer *komputer = new Komputer();
	cout << "\n \n";

	cout << "TEST KONSTRUKTORA DWA KOMPUTERA: " << endl;
	Komputer *komputer2 = new Komputer("LENOVO", 4000, 1);
	cout << "\n \n";

	cout << "TEST KONSTRUKTORA TRZY KOMPUTERA: " << endl;
	Komputer komputer3(4);
	cout << "\n \n";

	cout << "TEST KONSTRUKTORA KOPIUJACEGO KOMPUTERA: " << endl;
	Komputer komputer4(komputer3);
	cout << "\n \n";

	cout << "TEST KONSTRUKTORA CZTERY KOMPUTERA: " << endl;
	Procesor proc;
	Komputer komputer5(4000, proc);
	cout << "\n \n" <<endl;

	cout << "TEST KONSTRUKTORA DOMYSLNEGO DLA MONITORA " << endl;
	Monitor *mon = new Monitor();
	cout << "\n \n";

	cout << "TEST KONSTRUKTORA DWA DLA MONITORA " << endl;
	Monitor *mon2 = new Monitor(5555.6, 52);
	cout << "\n \n";

	cout << "TEST KONSTRUKTORA TRZY DLA MONITORA " << endl;
	Monitor *mon3 = new Monitor(52);
	cout << "\n \n" << endl;

	cout << "TEST KONSTRUKTORA DOMYSLNEGO DLA PAMIECIRAM " << endl;
	PamiecRam *ram = new PamiecRam();
	cout << "\n \n";

	cout << "TEST KONSTRUKTORA DWA DLA PAMIECIRAM " << endl;
	PamiecRam *ram2 = new PamiecRam(8000);
	cout << "\n \n";



}