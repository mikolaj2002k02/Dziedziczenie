#include <iostream>
#include <string>
using namespace std;
class osoba

{
public:
    osoba()
    { }
    int numer();
    string imie();
        string nazwisko();
        string klasa();
        string przedmiot();
    void wprowadz();
    void wypisz();
};

//...... tu body funkcji:

class uczen : public osoba
{
    int numer;
    string imie, nazwisko;
public:
    void wypisz_ucznia()
    {
        cout << "numer dziennika" "  " << numer << endl;
        cout << "imie" "  " << imie << endl;
        cout << "nazwisko" "  " << nazwisko<< endl;
        wypisz();
    }
    void wprowadz()
    {
    }
};
class nauczyciel : public osoba
{
    string klasa, przedmiot;
public:
    void wypisz_nauczyciela()
    {
        cout << "Klasa" << klasa <<  endl;
        cout << "Przedmiot" << przedmiot << endl;
        wypisz();

    }
    void wprowadz()
    {
    }
};

int main()
{
    uczen u1;
    u1.wprowadz();
    u1.wypisz_ucznia();
    nauczyciel n1;
    n1.wprowadz();
    n1.wypisz_nauczyciela();

    return 0;
};


