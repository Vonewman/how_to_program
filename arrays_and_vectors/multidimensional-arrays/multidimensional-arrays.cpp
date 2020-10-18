#include <iostream>
using namespace std;

int main()
{

	string animal[2][3] = {
		{"fox", "Dog", "Cat"},
		{"mouse", "squirrel", "parrot"}
	};

	for (int i=0; i<2; i++)
	{
		for (int j = 0; j<3; j++)
		{
			cout << animal[i][j] << " " << flush;
		}

		cout << endl;
	}
	return 0;
}
