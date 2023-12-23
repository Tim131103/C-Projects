#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	bool win = false;
	char Spielfeld[10][10];
	int Boatx = rand() % 10;
	int Boaty = rand() % 10;


	for (int x = 0; x < 9; x++) {
		for (int o = 0; o < 9; o++) {
			Spielfeld[x][o] = '-';
		}
	}
	// Spielfeld[Boatx][Boaty] = 'S';

	int Versuche = 4;
	int x_achse;
	int y_achse;
	do {
		cout << "Geben sie eine Koordinate ein!" << endl;
		cout << "X-Achse; ";
		cin >> x_achse;
		cout << endl;
		cout << "Y-Achse; ";
		cin >> y_achse;
		cout << endl;
		Spielfeld[x_achse][y_achse] = 'X';

		for (int i = 0; i < 9; i++) {
			for (int a = 0; a < 9; a++) {
				cout << Spielfeld[a][i];
			}
			cout << endl;
		}
		if (Spielfeld[x_achse][y_achse] == Spielfeld[Boatx][Boaty]) {
			cout << "Sie Haben das Schiff getroffen!" << endl;
			win = true;
		}
		if (Spielfeld[x_achse][y_achse] != Spielfeld[Boatx][Boaty]) {
			Versuche--;
			cout << "Sie Haben nicht getroffen! Uebrige Versuche: " << Versuche << endl;
			if (Boatx > x_achse && Boaty > y_achse) {
				cout << "Boot ist richtung Sued-Ost! " << endl;
			}
			if (Boatx > x_achse && Boaty < y_achse) {
				cout << "Boot ist richtung Nord-Ost! " << endl;
			}
			if (Boatx < x_achse && Boaty > y_achse) {
				cout << "Boot ist richtung Nord-West! " << endl;
			}
			if (Boatx > x_achse && Boaty > y_achse) {
				cout << "Boot ist richtung Sued-West! " << endl;
			}
			if (Boatx == x_achse && Boaty > y_achse) {
				cout << "Boot ist richtung Norden! " << endl;
			}
			if (Boatx == x_achse && Boaty < y_achse) {
				cout << "Boot ist richtung Sueden! " << endl;
			}
			if (Boatx > x_achse && Boaty == y_achse) {
				cout << "Boot ist richtung Osten! " << endl;
			}
			if (Boatx < x_achse && Boaty == y_achse) {
				cout << "Boot ist richtung Westen! " << endl;

			}
		}

	} while (Versuche > 0 && !win);
	if (win == true) {
		cout << "Sie haben gewonnen! Das Boot lag bei " << Boatx << " " << Boaty;
		Spielfeld[Boatx][Boaty] = 'S';
	}
	else {
		cout << "Sie haben nicht getroffen das Boot lag bei " << Boatx << " " << Boaty;
		Spielfeld[Boatx][Boaty] = 'S';
	}

	return 0;
}