#include <iostream>
#include <iomanip>
#include <cmath>

// TARBIYAH WAHIDIYAH (25.11.6568)
using namespace std;
int main()
{
	double celsius, reamur, fahrenheit;
	
	cout << "Konversi Suhu" << endl;
	cout << "===========================" << endl;
	cout << "Input celcius      " << char(248) << "C\b\b\b\b\b\b";
	cin >> celsius;
	reamur = (4.0 / 5.0) * celsius;
	fahrenheit = (9.0 / 5.0) * celsius + 32;
	cout << "Konversi \t " << endl;
	cout << "\t\t  " << reamur << " " << char(248) << "R" << endl;
	cout << "\t\t  " << fahrenheit << " " << char(248) << "F" << endl;
	cout << "===========================" << endl;

	return 0;
}