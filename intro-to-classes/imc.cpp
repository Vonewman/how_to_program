#include <iostream>
using namespace std;

/*****************************************************
 * Compléter le code à partir d'ici
 *****************************************************/

class Patient {
public:
    void init(double m, double h) {
	if (m > 0)
	    masse = m;
	else
	    masse = 0;

	if (h > 0)
	    hauteur = h;
	else
	    hauteur = 0;
    }

    void afficher() const {
	cout << "Patient : "
	     << masse
	     <<" kg pour "
	     << hauteur
	     << " m" << endl;
    }
    
    double poids() const {
	return masse;
    }

    double taille() const {
	return hauteur;
    }

    double imc() {
	if (hauteur == 0)
	    return 0;

	return masse / (hauteur * hauteur);
    }
private:
    double masse;
    double hauteur;
};

/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

int main()
{
  Patient quidam;
  double poids, taille;
  do {
    cout << "Entrez un poids (kg) et une taille (m) : ";
    cin >> poids >> taille;
    quidam.init(poids, taille);
    quidam.afficher();
    cout << "IMC : " << quidam.imc() << endl;
  } while (poids * taille != 0.0);
  return 0;
}
