#include <iostream>
using namespace std;

int main()
{
	int n = 0;//
	int m = 1;//
	int k = 1;
	int j = 1;
	cout << "Введите сторону треугольника :";
	cin >> n;
	m = n;

	k = 1;
	while (k <= m)
	{
		j = 1;
		if (k < m) {
			while (j <= k) {
				if (j == 1) { cout << "* "; }
				else {
					if (j == k) { cout << "* "; }
					else { cout << "  "; }
				}
				j++;
			}
		}
		else { while (j <= k) { cout << "* "; j++; } }



		cout << "\n";
		k++;
	}
	return 0;
}


