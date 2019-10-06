#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите сторону" << endl;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 2 * N - 1; j++)
			cout << (i == N - 1 || i == N - 1 - j || i == -(N - 1 - j) ? '*' : ' ');
	cout << std::endl;
	}
}
