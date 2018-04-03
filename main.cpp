#include <iostream>
#include "Komputer.h"
#include "Monitor.h"
#include "PamiecRam.h"
#include "Procesor.h"
#include "TestOperatory.h"
#include "TestyPozostale.h"



#ifdef _DEBUG
#define DEBUG() Test() 
#else
#define DEBUG()
#endif

void Test() {
	TestOperatory test;
	test.testRownosci();
	test.testDodawania();
	test.testWiekszy();
	test.testPreinkrementacji();
	test.testPostinkrementacji();
	test.testWyjscia();
	test.testKonwersji();
	test.testIndeksowy();
	test.testPrzypisania();
	test.testWejscia();

	getchar();


	TestyPozostale testy;

	cout << "\n" << endl;
	testy.testKonstruktorow();
	getchar();

}


int main()
{

	DEBUG();
	getchar();

	return 0;
}


