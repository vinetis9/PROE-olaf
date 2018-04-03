#include "TestOperatory.h"
#include "Komputer.h"
#include <iostream>

using namespace std;

void TestOperatory::testRownosci(){

	cout << "\n \n";
	Komputer k("WBA", 3000, 5);
	Komputer ko("WBA", 5000, 6);
	Komputer kom("WBA", 3000, 7);

	if (k == ko)
		cout << "Niepoprawne dzialanie operatora ==" << endl;
	if (k == kom )
		cout << "Poprawne dzialanie operatora ==" << endl;

}

void TestOperatory::testWiekszy(){
	cout << "\n \n";
	Komputer wiekszy(5);
	Komputer mniejszy(2);

	if (wiekszy > mniejszy)
		cout << "Poprawne dzialanie operatora >" << endl;
	else
		cout << "Niepoprawne dzialanie operatora >" << endl;

}


TestOperatory::TestOperatory() {

}

TestOperatory::~TestOperatory()
{
}

void TestOperatory::testDodawania() {
	cout << "\n \n";
	Komputer komputer1("Pierwszy", 2232, 2);
	Komputer komputer2("Drugi", 3000, 3);
	//Komputer wynik("Trzeci",2000, 7);

	Komputer wynik = (komputer1 + komputer2);
	cout << "W wyniku dodawania dwoch komputerow jest 2+3 monitorow, czyli:";
	cout << wynik.getLmonitorow() << endl;
	cout << wynik;
}

void TestOperatory::testPrzypisania() {
	cout << "\n \n";
	Komputer komputer1("Pierwszy", 2232, 2);
	Komputer komputer2("Drugi", 3000, 3);
	komputer2 = komputer1;
	cout << "Komputer: pierwszy, 2232, 2:";
	cout << komputer2;
	cout << komputer2.getLmonitorow() << endl;


}

void TestOperatory::testPreinkrementacji() {
	cout << "\n \n";
	Komputer komputer1("Pierwszy", 2232, 2);
	Komputer komputer2("Drugi", 3000, 3);
	
	++komputer1;

	if(komputer1.getLmonitorow() == komputer2.getLmonitorow() && komputer1 == (++komputer1))
		cout << "Poprawne dzialanie operatora pre ++" << endl;
	else
		cout << "Niepoprawne dzialanie operatora pre ++" << endl;

}

void TestOperatory::testPostinkrementacji() {
	cout << "\n \n";
	Komputer komputer1("Pierwszy", 2232, 2);
	Komputer komputer2("Drugi", 3000, 3);

	komputer1++;
	if (komputer1.getLmonitorow() == komputer2.getLmonitorow() )
		cout << "Poprawne dzialanie operatora post ++" << endl;
	else
		cout << "Niepoprawne dzialanie operatora post ++" << endl;

}

void TestOperatory::testWyjscia() {
	cout << "\n \n";
	Komputer komputer1("HP", 2232, 2);
	cout << "Nazwa komputera1 i jego cena to: " << endl;
	cout << komputer1 <<endl;
}

void TestOperatory::testWejscia() {
	cout << "\n \n";
	Komputer komputer("Pierwszy", 2232, 2);
	cout << "Wprowadz nazwe komputera i jego cene;" << endl;
	cin >> komputer;
	cout << komputer << endl;

}

void TestOperatory::testIndeksowy() {
	cout << "\n \n";
	Komputer komputer("Pierwszy", 55552, 3);
	cout << "TEST dzialania operatora indeksowego" << endl;
	cout << komputer[1].getCale() <<endl; //powinno byc 1

}


void TestOperatory::testKonwersji() {

	Monitor monitor(5555.6, 1000);
	(Monitor)monitor;
	cout << "TEST KONWERSJI DLA MONITORA :" << monitor.getCale() << endl;
	//cout << monitor.getCena(); wywo³anie tej funkcji powoduje b³¹d kompilacji, czyli konwersja dziala poprawnie

}



