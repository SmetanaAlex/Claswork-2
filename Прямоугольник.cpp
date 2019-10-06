
#include <iostream>
using namespace std;
int iff();
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y, xk, yk;
	cout << "Введите высоту" << endl;
	cin >> x;
	cout << "Введите шырину" << endl;
	cin >> y;
	xk = 1;
	while (xk <= x) {
		yk = 1;
		if (xk == 1) {
			while (yk <= y) {
				cout << "*  ";
				yk = yk + 1;
			}//while(yk=0)
		}//if (xk=0)
		else { //else(xk=0)
			if (xk == x) {
				while (yk <= y) {
					cout << "*  ";
					yk = yk + 1;
				}//while(yk=y)
			}//if(xk=0)
			else {//else(xk=x)
				while (yk <= y) {
					if (yk == 1) {
						cout << "*  ";
					}//if (yk=0)
					else {
						if (yk == y) {
							cout << "*  ";
						}//if (yk=y)
						else {
							cout << "   ";
						}//else (yk=y)
					}//else (yk=0)
					yk = yk + 1;
				}//while yk=y
			}//else (xk=x)
		}//else(xk=0)
		xk = xk + 1;
		cout << "" << endl;
	}//while(xk<=x)
	return 0;
}// main ()

