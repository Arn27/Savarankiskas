#include "Funkcijos.h"

int meniu() {
	int op = 0;
	cout << "-------MENIU" << endl;
	cout << "1. Prideti studenta" << endl;
	cout << "2. Duomenu atvaizdavimas (Vidurkis)" << endl;
	cout << "------------" << endl;
	cout << "9. Baigti" << endl;
	cin >> op;

	return op;
};