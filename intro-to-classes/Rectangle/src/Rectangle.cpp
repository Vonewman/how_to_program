#include "Rectangle.h"
#include <cassert>


Rectangle::Rectangle(double h, double L)
    : hauteur_(h), largeur_(L)
{}

double Rectangle::surface() const
{
    return largeur_ * hauteur_;
}


double Rectangle::hauteur() const
{
    return hauteur_;
}

double Rectangle::largeur() const
{
    return largeur_;
}

void Rectangle::hauteur(double h)
{
    assert(h >= 0);
    hauteur_ = h;
}

void Rectangle::largeur(double l)
{
    assert(l >= 0);
    largeur_ = l;
}
