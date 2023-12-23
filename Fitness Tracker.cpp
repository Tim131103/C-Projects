#include <iostream>
using namespace std;

string name;
string datum;
string again = "ja";
int counter = 0;

int main() {
	while (again != "nein") {

		system("cls");
		
		cout << " Das ist ein Workouttracker" << endl;
		cout << "Bitte geben Sie ihren Namen ein" << endl;

		cin >> name;

		cout << endl;

		cout << "Welches Datum haben wir?" << endl;
		cin >> datum;
		cout << endl;


		string übung[100];
		int Kilo[100];
		int wiederholung[100];

		for (int i = 0; i < 100; i++) {
			cout << "Bitte geben Sie den Namen der Uebung an!" << endl;
			cin >> übung[i];
			cout << endl;
			cout << "Bitte geben sie das Gewicht in Kilo ein aber nur ganze Zaheln! " << endl;
			cin >> Kilo[i];
			cout << endl;
			cout << "Bitte geben Sie ein wie viele Wiederholungen sie gemacht haben! " << endl;
			cin >> wiederholung[i];
			cout << endl;

			cout << "Wollen sie nochmal eine Uebung eingeben?" << endl;
			cin >> again;
			counter = counter + 1;
			if (again != "ja") {

				break;
		  }	  

		}

		// Protokoll

		cout << "Herr/Frau " << name << " hat am " << datum << " folgendes Workout gemacht!" << endl;
		cout << "------------------------------------------------------------------" << endl;

		for (int x = 0; x <= counter; x++) {

			if (x == counter) {

				break;
			}
			cout << "Sie haben in der Uebung Namens: " << übung[x] << " mit so viel KG als Gewicht: " << Kilo[x] << "KG so viele wiederholungen geschafft: " << wiederholung[x] << endl;
			

		}
		
	}
	
	return 0;
}