#include <iostream>
#include "Peluche.h"

using namespace std;

// prototype de la fonction etiquette
void etiquette(Peluche p);

int main()
{
    Peluche bobo; // On utilise le constructeur par defaut
    cout << "Etiquette :" << endl;
    etiquette(bobo);
    return 0;
}

// definition de la fonction etiquette
void etiquette(Peluche p) {
    cout << "Hello, mon nom est " << p.getNom() << endl
	 << "Je suis un " << p.getEspece() << " et je coute "
	 << p.getPrix() << " francs." << endl;
}
