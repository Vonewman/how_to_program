#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle rect(3.0, 4.0);

    cout << "Surface : "
	 << rect.surface()
	 << endl;
    
    return 0;
}
