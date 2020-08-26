// une classe representant un objet Rectangle
// le protototype de la classe
// Nom du fichier: Rectangle.h
// @author: Abdoulaye Diallo
#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle {
 public:
    // Constructor
    Rectangle(double, double);
    
    // prototypes des methodes
    double surface() const;

    // accesseurs
    double hauteur() const;
    double largeur() const;

    // manipulateurs
    void hauteur(double h);
    void largeur(double l);
 private:
    // declarations des attributs
    double largeur_, hauteur_;
};


#endif
