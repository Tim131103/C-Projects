#include <iostream>



using namespace std;

int main()
{
	locale::global(locale("German_germany"));

	int Kunden = 142;
	double Bestanden = 62.3;
	string Kennzeichen = "E-FB 235";

	cout << "Kunden: " << Kunden << endl;
	cout << "Prüfung bestanden: " << Bestanden << "%" << endl;
	cout << "Kennzeichen Fahrzeug: " << Kennzeichen << endl;

	return 0;















}