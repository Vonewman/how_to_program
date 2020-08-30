#include <iostream>
#include "Figure.h"

using namespace std;

int main()
{
	RectangleColore r(4.3, 12.5, 4);
	cout << r.getLargeur() << endl;
	r.affiche(cout);
	cout << endl;

	Cercle c(12.2, 2.3, 4.5);
	c.affiche(cout);
	cout << endl;

	Rectangle r2(1.2, 3.4, 12.3, 43.2);
	r2.affiche(cout);
	cout << endl;

	return 0;
}
