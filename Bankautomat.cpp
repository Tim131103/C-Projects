#include <iostream>

using namespace std;

int main() 
{
	/*
	int zahl;
	int fünfziger;
	int zwanziger;
	int zehn;
	int fünf;
	int zwei;
	int eins;



	cout << "Bitte Geld zum abheben angeben" << endl;
	cin >> zahl;
	cout << endl;


	cout << "--------------------------------" << endl;

	fünfziger = zahl / 50;
	zahl = zahl % 50;

	zwanziger = zahl / 20;
	zahl = zahl % 20;

	zehn = zahl / 10;
	zahl = zahl % 10;

	fünf = zahl / 5;
	zahl = zahl % 5;

	zwei = zahl / 2;
	zahl = zahl % 2;

	eins = zahl / 1;
	zahl = zahl % 1;

	cout << "Es sind " << fünfziger << " Fuenfziger scheine" << endl;
	cout << "Es sind " << zwanziger << " Zwanziger scheine" << endl;
	cout << "Es sind " << zehn << " Zehner scheine" << endl;
	cout << "Es sind " << fünf << " Fuenfer scheine" << endl;
	cout << "Es sind " << zwei << "  Zwei Euro Muenzen" << endl;
	cout << "Es sind " << eins << " Ein Euro Muenzen" << endl;

	*/

	
	
		int zahl;
		double zahlo;
		double Betrag;
		double bezahlt;
		int fünfziger;
		int zwanziger;
		int zehn;
		int fünf;
		int zwei;
		int eins;
		int fünfzigcent;
		int zwanzigcent;
		int zehncent;
		int fünfcent;
		int zweicent;
		int eincent;



		cout << "Bitte Preis angeben der zu bezahlen ist: " << endl;
		cin >> zahlo;
		cout << endl;
		cout << "Bitte Betrag angeben der abgegeben wurde: " << endl;
		cin >> Betrag; 
		cout << endl;

		zahlo = zahlo * 100;
		Betrag = Betrag * 100;




		bezahlt = Betrag - zahlo;

		zahl = Betrag - zahlo;


		cout << "--------------------------------" << endl;

		fünfziger = zahl / 5000;
		zahl = zahl % 5000;

		zwanziger = zahl / 2000;
		zahl = zahl % 2000;

		zehn = zahl / 1000;
		zahl = zahl % 1000;

		fünf = zahl / 500;
		zahl = zahl % 500;

		zwei = zahl / 200;
		zahl = zahl % 200;

		eins = zahl / 100;
		zahl = zahl % 100;

		fünfzigcent = zahl / 50;
		zahl = zahl % 50;
		
		zwanzigcent = zahl / 20;
		zahl = zahl % 20;

		zehncent = zahl / 10;
		zahl = zahl % 10;

		fünfcent = zahl / 5;
		zahl = zahl % 5;

		zweicent = zahl / 2;
		zahl = zahl % 2;

		eincent = zahl / 1;
		zahl = zahl % 1;



		cout << "Es sind " << fünfziger << " Fuenfziger scheine" << endl;
		cout << "Es sind " << zwanziger << " Zwanziger scheine" << endl;
		cout << "Es sind " << zehn << " Zehner scheine" << endl;
		cout << "Es sind " << fünf << " Fuenfer scheine" << endl;
		cout << "Es sind " << zwei << "  Zwei Euro Muenzen" << endl;
		cout << "Es sind " << eins << " Ein Euro Muenzen" << endl;
		cout << "Es sind " << fünfzigcent << " Eine fuenfzigcent Muenzen" << endl;
		cout << "Es sind " << zwanzigcent << " Eine zwanzigcent Muenzen" << endl;
		cout << "Es sind " << zehncent << " Eine zehncent Muenzen" << endl;
		cout << "Es sind " << fünfcent << " Eine fuenfcent Muenzen" << endl;
		cout << "Es sind " << zweicent << " Eine zweicent Muenzen" << endl;
		cout << "Es sind " << eincent << " Eine eincent Muenzen" << endl;

		cout << "Er bekommt " << bezahlt / 100 << "Euro zurueck" << endl;
		


		

}