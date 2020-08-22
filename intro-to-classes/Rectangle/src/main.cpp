#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle rect;

    rect.largeur(3.0);
    rect.hauteur(4.0);
    cout << "Surface : "
	 << rect.surface()
	 << endl;
    
    return 0;
}
