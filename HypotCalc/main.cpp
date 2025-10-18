#include <iostream>
#include <iomanip>

// TARBIYAH WAHIDIYAH (25.11.6568)
using namespace std;
int main()
{
    cout << "Hitung sisi miring" << endl; // Soal Satu

    double a, b, c;
    cout << setw(8) << " /|" << endl;
    cout << setw(8) << " / |" << endl;
    cout << "a" << setw(9) << "/  | c" << endl;
    cout << setw(8) << "/___|" << endl;
    cout << setw(6) << "b" << endl << endl;

    cout << "Masukan sisi a dan b: ";
    cin >> a >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Sisi miring c \t\t: " << c << endl;

    return 0;
}