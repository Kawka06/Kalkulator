#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "---------------------" << endl;
    cout << "Kalkulator" << endl;
    cout << "by Mateusz Kawka" << endl;
    cout << "All rights reserved" << endl;
    cout << "---------------------" << endl;

    double zm1, zm2;

    poczatek:

    cout << "Podaj pierwsza liczbe" << endl;
    cin >> zm1;
    cout << "Podaj druga liczbe" << endl;
    cin >> zm2;

    char znak;

    cin >> znak;

    switch (znak)
    {
    case '+':
        cout << zm1 << " + " << zm2 << " = " << (zm1 + zm2) << endl;
        break;
    case '-':
        cout << zm1 << " - " << zm2 << " = " << (zm1 - zm2) << endl;
        break;
    case '*':
        cout << zm1 << " * " << zm2 << " = " << (zm1 * zm2) << endl;
        break;
    case '/':
        if (zm2 != 0)
            cout << zm1 << " / " << zm2 << " = " << (zm1 / zm2) << endl;
        else
            cout << "Cholero nie dziel przez zero ;) " << endl;
        break;
    }

    string znak2;

    cout << "Czy chcesz kontyunowac program? (T/N)" << endl;
    cin >> znak2;

    if (znak2 == "t" || znak2 == "T")
        goto poczatek;

    system("pause");
}