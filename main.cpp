#include <iostream>
#include "Calculations.h"

using namespace std;

class Calculations calculations;

int main()
{
	cout << "5 x 5 = " << calculations.Multiply(5, 5) << endl;
	cout << "81 + 67 = " << calculations.Add(81, 67) << endl;
	cout << "78 / 14 = " << calculations.Divide(78, 14) << endl;
	cout << "987 - 564 = " << calculations.Subtract(987, 564) << endl;

	system("pause");
	return 0;
}
