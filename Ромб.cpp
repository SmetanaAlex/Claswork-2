#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int t, a;
	cout << "Введите сторону: ";
	cin >> a;
	cout << "\n";
	t = a * 2 - 1;// diagonal

	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < t; j++)
		{
			if (j == t / 2 + i || j == t / 2 - i || j == i - t / 2 || j == t - i + t / 2 - 1)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	return 0;
}