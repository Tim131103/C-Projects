#include <iostream>

using namespace std;

int main() {
	char gamma;
	double speed;
	double abstand;
	string antwort;

	do {
		cout << "Fahren sie Innerorts(1) oder Außerorts(2)? " << endl;
		cin >> gamma;

		if (gamma == '1') {
			cout << "Sie müssen 15 Meter abstand halten! ";
		}
		else {
			cout << "Wie schnell fahren sie? " << endl;
			cin >> speed;
			abstand = speed / 2;
			cout << "Sie müssen " << abstand << " Meter abstand halten! ";
		};
		cout << "Wollen sie nochmal was berechnen?" << endl;
			cin >> antwort;

	} while (antwort == "ja");



	return 0;










}

