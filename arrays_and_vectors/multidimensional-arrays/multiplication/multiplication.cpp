#include <iostream>
#include <iomanip>

using namespace std;

const int rows = 100;
const int columns = 100;

int main()
{
	int mult[rows][columns];

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			mult[i][j] = (i)*(j);
			cout << setw(3) << mult[i][j] << "  ";
		}

		cout << endl;
	}
	return 0;
}
