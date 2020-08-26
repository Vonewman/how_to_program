#ifndef PELUCHE_H
#define PELUCHE_H

#include <string>

class Peluche {
 private:
    std::string espece;
    std::string nom;
    double prix;

 public:
    Peluche(Peluche const& p);
    Peluche(std::string, std::string, double);
    std::string getEspece() const;
    std::string getNom() const;
    double getPrix() const;

    void setPrix(double);
};


#endif
