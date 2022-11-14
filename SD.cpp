#include "bibliotekos.h"

int main() {
	int option = 0, kiek = 0;
	string r;
	Studentas S;
	vector<Studentas> Studentai;

	while (option != 9) {
		kiek = Studentai.size();
		option = meniu();

		switch (option) {
		case 1:
			// prideti studenta
			cin >> S;
			Studentai.push_back(S);
			break;
		case 2:
			for (int i = 0; i < kiek; i++) {
				Studentai[i].countGalutinis(1);
			}
			cout << setw(15) << left << "Pavarde" << setw(15) << left << "Vardas" << setw(15) << left << setprecision(2) << fixed << "Galutinis(Vidurkis)" << endl;
			cout << "------------------------------------------" << endl;
			for (int j = 0; j < kiek; j++) {
				cout << Studentai[j];
			}
			break;
		}
	}
	return 0;
}
