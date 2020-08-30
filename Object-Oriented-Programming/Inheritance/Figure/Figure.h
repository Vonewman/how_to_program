#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>

class Figure {
 public:
	 Figure(double x = 0.0, double y = 0.0) : x(x), y(y) {}
	 void affiche(std::ostream& sortie) {
		 sortie << "centre = (" << x << "," << y << ")";
	 }
	 void getPoint(double& abscisse, double& ordonnee) const;
	 void setPoint(double abscisse, double ordonnee);

 protected:
	 double x;
	 double y;
};


class Rectangle : public Figure {
 protected:
	double largeur;
	double longueur;

 public:

	Rectangle(double larg, double L) : 
		largeur(larg), longueur(L)
	{}
	double surface() const;
	double getLongueur() const;
	double getLargeur() const;
	void setLargeur(double);
	void setLongueur(double);
};

// ----------------------------------------------------

class Cercle : public Figure {
 public:
    double surface() const;
    double getRayon() const;
    void setRayon(double);
 private:
	double rayon;
};

// ---------------------------------------------------
class RectangleColore : public Rectangle {
 protected:
	unsigned int couleur;

 public:
	RectangleColore(double larg, double L, unsigned int c) : 
		Rectangle(larg, L), couleur(c)
	{}
};

#endif
