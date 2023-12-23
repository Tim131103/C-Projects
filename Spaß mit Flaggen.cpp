#include <iostream>

using namespace std;

int main() {
	char wowirdgefahren;
	double speed;
	double abstand;
	string antwort;

	do {
		cout << "Fahren sie Innerorts(1) oder Außerorts(2)? " << endl;
		cin >> wowirdgefahren;

		if (wowirdgefahren == '1') {
			cout << "Sie muessen 15 Meter abstand halten! " << endl;
		}
		else {
			cout << "Wie schnell fahren sie? " << endl;
			cin >> speed;
			abstand = speed / 2;
			cout << "Sie muessen " << abstand << " Meter abstand halten! " << endl;
		};
		cout << "Wollen sie nochmal was berechnen? Wenn ja dann bitte ja eingeben!" << endl;
		cin >> antwort;

		system("cls");      // Sorgt dafür das die Konsole leer gemacht wird!

	} while (antwort == "ja");
	return 0;
}


	