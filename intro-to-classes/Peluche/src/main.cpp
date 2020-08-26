#include <iostream>
#include "Peluche.h"

using namespace std;

// prototype de la fonction etiquette
void etiquette(Peluche p);

int main()
{
    Peluche bobo("ours", "Bobo", 14.95); // On utilise le constructeur par defaut
    cout << "Etiquette :" << endl;
    etiquette(bobo);

    Peluche* bello;
    {
	Peluche ssss("cobra", "Ssss", 10.00);
	bello = new Peluche("toucan", "Bello", 20.00);
    }
    Peluche bello_clone(*bello);
    etiquette(bello_clone);
    delete bello;
    return 0;
}

// definition de la fonction etiquette
void etiquette(Peluche p) {
    cout << "Hello, mon nom est " << p.getNom() << endl
	 << "Je suis un " << p.getEspece() << " et je coute "
	 << p.getPrix() << " francs." << endl;
}
