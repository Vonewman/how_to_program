#include "Figure.h"
#include <cmath>

// ======= Figure =====================
void Figure::getPoint(double& abscisse, double& ordonnee) const {
	abscisse = x;
	ordonnee = y;
}

void Figure::setPoint(double abscisse, double ordonnee) {
	x = abscisse;
	y = ordonnee;
}

// ======= Rectangle ====================
double Rectangle::surface() const {
	return largeur * longueur;
}

double Rectangle::getLongueur() const {
	return longueur;
}

double Rectangle::getLargeur() const {
	return largeur;
}

void Rectangle::setLargeur(double l) {
	largeur = l;
}

void Rectangle::setLongueur(double L) {
	longueur = L;
}

// ======= Cercle ========================
double Cercle::surface() const {
	return M_PI * rayon * rayon; 
}

double Cercle::getRayon() const {
	return rayon;
}

void Cercle::setRayon(double r) {
	if (r < 0.0) r = 0.0;
	rayon = r;
}
