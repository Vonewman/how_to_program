#include "Peluche.h"
#include <string>

using namespace std;

string Peluche::getEspece() const
{
    return espece;
}

string Peluche::getNom() const
{
    return nom;
}

double Peluche::getPrix() const {
    return prix;
}

void Peluche::setPrix(double valeur) {
    prix = valeur;
}
