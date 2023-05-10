/*Exercitiul 2.1. Plecand de la exercitiul 3 din laborator, sa se ordoneze crescator lista studentilor dupa criteriul an, utilizand functii STL.

Indicatii:

se construieste functia criteriului de selectie. Spre exepmplu:
bool comparAn(Nod &a, Nod &b) {

    return a.an < b.an;

}

se apeleaza functia de sortare sort, a bibliotecii STL:
*/


#include <iostream>
#include <list>
#include <cstring>

using namespace std;
struct Nod{

    int ID;

    char nume[50];

    int an;

};

    bool comparAn(Nod &a, Nod &b) {
        return a.an < b.an;
    }

int main() {
    list<struct Nod> lista;

//introducere date in lista ( la final):
    Nod el;

    el.ID = 1;

    strcpy(el.nume, "nume 1");

    el.an = 1;

    lista.push_back(el); // introducere la final in lista


    // adaugare la inceput

    Nod el4;
    el4.ID = 4;
    strcpy(el4.nume, "nume 4");
    el4.an = 4;
    lista.push_front(el4);

    // adaugare la final

    Nod el3;
    el3.ID= 3;
    strcpy(el3.nume, "nume 3");
    el3.an = 3;
    lista.push_back(el3);

    Nod el2;
    el2.ID = 2;
    strcpy(el2.nume, "nume 2");
    el2.an = 2;
    lista.push_back(el2);



    // Afisare elemente din lista inainte de sortare;

    cout << "Inainte de a efectua sortarea, lista arata in felul urmator:\n";

    for(std::list<Nod>::iterator it = lista.begin(); it != lista.end(); it++){

        cout << "ID: " << it->ID << " nume: " << it->nume << " an: " << it->an << endl;

    }

    //sortam crescator lista de studenti dupa crieteriul an

    lista.sort(comparAn);

    // Afisare elemente lista finala

    cout << "Dupa efectuarea sortarii listei dupa criteriul an, lista arata in felul urmator:\n";

    for (std::list<Nod>::iterator it = lista.begin(); it != lista.end(); it++) {

        cout << "ID: " << it->ID << " nume: " << it->nume << " an: " << it->an << endl;

    }
    return 0;
}


//Exercitiul 2.2. Modificati exercitiul 2.1. prin implementarea criteriului de ordonare dupa nume.
//(Modificam funtia bool din comparAn in comparNume, dar si ce returneaza aceasta)
//(Modificam functia de sortare din lista.sort(comparAn) in lista.sort(comparNume)

#include <iostream>
#include <list>
#include <cstring>

using namespace std;
struct Nod{

    int ID;

    char nume[50];

    int an;

};

bool comparNume(Nod &a, Nod &b) {
    return a.nume > b.nume;
}

int main() {
    list<struct Nod> lista;

//introducere date in lista ( la final):
    Nod el;

    el.ID = 1;

    strcpy(el.nume, "nume 1");

    el.an = 1;
    lista.push_back(el); // introducere la final in lista


    // adaugare la inceput

    Nod el4;
    el4.ID = 4;
    strcpy(el4.nume, "numa 4");
    el4.an = 4;
    lista.push_front(el4);

    // adaugare la final

    Nod el3;
    el3.ID= 3;
    strcpy(el3.nume, "nume 3");
    el3.an = 3;
    lista.push_back(el3);

    Nod el2;
    el2.ID = 2;
    strcpy(el2.nume, "nume 2");
    el2.an = 2;
    lista.push_back(el2);



    // Afisare elemente din lista inainte de sortare;

    cout << "Inainte de a efectua sortarea, lista arata in felul urmator:\n";

    for(std::list<Nod>::iterator it = lista.begin(); it != lista.end(); it++){

        cout << "ID: " << it->ID << " nume: " << it->nume << " an: " << it->an << endl;

    }

    //sortam crescator lista de studenti dupa crieteriul nume

    lista.sort(comparNume);

    // Afisare elemente lista finala

    cout << "Dupa efectuarea sortarii listei dupa criteriul nume, lista arata in felul urmator:\n";

    for (std::list<Nod>::iterator it = lista.begin(); it != lista.end(); it++) {

        cout << "ID: " << it->ID << " nume: " << it->nume << " an: " << it->an << endl;

    }
    return 0;
}

