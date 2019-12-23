#include <iostream>

using namespace std;

int main()
{
	double sum = 0;
	int number = 0;
	int quantity;
	while (number != -1)
	{
		cout << "Enter product number and quantity sold for next product (-1 0 to exit): ";
		cin >> number >> quantity;
		switch (number)
		{
		case 1:
			sum += 2.98 * quantity;
			break;
		case 2:
			sum += 4.50 * quantity;
			break;
		case 3:
			sum += 9.98 * quantity;
			break;
		case 4:
			sum += 4.49 * quantity;
			break;
		case 5:
			sum += 6.87 * quantity;
			break;
		}
	}
	cout << "Total value is: " << sum << endl;
}
