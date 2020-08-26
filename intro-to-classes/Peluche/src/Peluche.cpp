#include "Peluche.h"
#include <iostream>
#include <string>

using namespace std;

// Constructeur de copie
Peluche::Peluche(Peluche const& p)
    : espece(p.espece), nom(p.nom + "-copie"), prix(p.prix)
{
    cout << "[Une peluche a ete copiee]" << endl;
}

// Constructeur de la classe
Peluche::Peluche(string espece, string nom, double prixAchat)
    : espece(espece), nom(nom), prix(prixAchat)
{
    cout << "[Une peluche est fabriquee]" << endl;
}

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
