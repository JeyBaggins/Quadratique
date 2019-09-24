//Quadratique

#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;


int main()
{
	double A, B, C;
	cout << "Entrez les coefficients A, B et C de l'equation quadratique separes d'un espace" << endl;
	cin >> A >> B >> C;
	double racine1, racine2;
	if ((pow(B, 2) - 4 * A*C) < 0) {
		cout << "racine imaginaire" << endl;
		racine1 = ((-B) + sqrt(-1*(pow(B, 2) - 4 * A*C))) / (2 * A);
		racine2 = ((-B) - sqrt(-1*(pow(B, 2) - 4 * A*C))) / (2 * A);
		cout << "La premiere racine est: " << -B/2 << "+" << (sqrt(-1 * (pow(B, 2) - 4 * A*C)))/2 << "i" << endl;
		cout << "La premiere racine est: " << -B/2 << "-" << (sqrt(-1 * (pow(B, 2) - 4 * A*C)))/2 << "i" << endl;
	}
	else {
		racine1 = ((-B) + sqrt(pow(B, 2) - 4 * A*C)) / (2 * A);
		racine2 = ((-B) - sqrt(pow(B, 2) - 4 * A*C)) / (2 * A);
		cout << "la premiere racine: " << racine1 << endl;
		cout << "la deuxieme racine: " << racine2 << endl;
	}
	system("pause");
	return 0;
}