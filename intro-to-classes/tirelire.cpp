#include <iostream>
using namespace std;

/*******************************************
 * Complétez le programme à partir d'ici.
 *******************************************/

class Tirelire {
public:
    double getMontant() const {
	return montant;
    }

    void afficher() const {
	if (montant == 0) {
	    cout << "Vous etes sans le sou.";
	} else {
	    cout << "Vous avez " << montant << "euros dans votre tirelire";
	}
    }
    
    void secouer() const {
	if (montant == 0)
	    cout << endl;
	else
	    cout << "Bing bing" << "\n";
    }

    void remplir(double montant_donnee) {
	if (montant_donnee >= 0) {
	    montant = montant_donnee;
	}
    }

    void vider() {
	montant = 0;
    }

    void puiser(double montant_pris) {
	if (montant_pris < 0) {
	    cout << endl;
	} else if (montant_pris > montant){
	    montant = 0;
	} else {
	    montant = montant_pris;
	}
    }

    bool montant_suffisant(double budget, double solde) {
	solde = montant - budget;
	if (budget <= 0) {
	    return true;
	    solde = montant;
	} else {
	    return true;
	}
    }

    double calculerSolde(double budget_depenser) {
	return montant - budget_depenser;
    }
private:
    double montant;
};

/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

int main()
{
  Tirelire piggy;

  piggy.vider();
  piggy.secouer();
  piggy.afficher();

  piggy.puiser(20.0);
  piggy.secouer();
  piggy.afficher();
  piggy.remplir(550.0);
  piggy.secouer();
  piggy.afficher();

  piggy.puiser(10.0);
  piggy.puiser(5.0);
  piggy.afficher();

  cout << endl;

  // le budget de vos vacances de rève.
  double budget;

  cout << "Donnez le budget de vos vacances : ";
  cin >> budget;

  // ce qui resterait dans la tirelire après les
  // vacances
  double solde(0.0);

  if (piggy.montant_suffisant(budget, solde)) {
    cout << "Vous êtes assez riche pour partir en vacances !"
         << endl
         << "Il vous restera " << solde << " euros"
         << " à la rentrée." << endl << endl;
    piggy.puiser(budget);
  } else {
    cout << "Il vous manque " << solde << " euros"
         << " pour partir en vacances !" << endl << endl;
  }
  return 0;
}
