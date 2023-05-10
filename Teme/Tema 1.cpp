//~~Exercitiul 1~~
/*
Pornind de la definitia de mai jos:

struct Carti {
   char  titlu[50];
   char  autor[50];
   char  domeniu[100];
   int   id_carte;
} carte; 
Implementati un program in care sa definiti cateva functii: introducere, adaugare, afisare, cautare, utilizate intr-un program principal.
Memorarea structurii de date se va realiza la alegere intr-o structura statica sau dinamica.
#include <iostream>

*/
using namespace std;

typedef struct Carti {
    char  titlu[50];
    char  autor[50];
    char  domeniu[100];
    int   id_carte;
} carte;

carte adaugare()
{
    carte c;
    cout << "Introduceti titlul:";
    cin >> c.titlu;
    cout << "\n";
    cout << "Introduceti autorul:";
    cin >> c.autor;
    cout << "\n";
    cout << "Introduceti domeniul:";
    cin >> c.domeniu;
    cout << "\n";
    cout << "Intdouceti id-ul cartii:";
    cin >> c.id_carte;
    cout << "\n";
    return c;
}

void afisare(carte c){

    cout << "Numele cartii este " << c.titlu << ", autorul este " << c.autor << ", domeniul este " << c.domeniu << ", id-ul cartii este " << c.id_carte << ".";

}
int cautare(carte c[10], int n, int z) {

    cout << "Introduceti id-ul cartii pe care doriti sa o cautati:\n";
    cin >> z;
    for (int i = 1; i <= n; i++) {
        if (z == c[i].id_carte) {
            afisare(c[i]);
            cout << "\n";
        }

    }
}


int main(){

    int n;
    cout << "Cate carti doriti sa introduceti?\n";
    cin >> n;
    while(n>10){
        cout << "Putem depozita maxim 10 carti in memoria calculatorului!\n" << "Va rog introduceti alta valoare \n";
        cin >> n;
    }
    carte crt[10];
    for (int i=1;i<=n;i++){
        crt[i]=adaugare();
    }
    if(n==1){
        cout << "Cartea are urmatoarele specificatii: \n";
    }
    else
        cout << "Cartile au urmatoarele specificatii: \n";
    for(int i=1;i<=n;i++){
        afisare(crt[i]);
        cout << "\n";
    }
    int c;
    cautare(crt,n,c);

}


//~~Exercitiul 2~~

/*
Scrieti un program in C in care definiti o structura pentru a modela un numar complex avand componente reale si functii pentru operatorii aritmetici cu numere complexe. Folositi functiile in mod corespunzator.

struct Complex {

   float x , y ;

};

struct Complex citeste ( ) ;

void afiseaza( struct Complex a ) ;

struct Complex adunare ( struct Complex a , struct Complex b ) ;

struct Complex scadere ( struct Complex a , struct Complex b ) ;

struct Complex inmultire ( struct Complex a , struct Complex b ) ;

struct Complex modul ( struct Complex a ) ;
*/
#include <iostream>
#include <math.h>
using namespace std;

struct Complex {

    float y ;
    float x;

};

struct Complex citeste(){

    struct Complex n;
    cout << "Va rog introduceti numerele reale dorite: "<< endl;
    cin >> n.x >> n.y;
    return n;

}

void afiseaza(struct Complex a) {

    cout << a.x  << " + " << a.y << "i"<< endl;

}

struct Complex adunare ( struct Complex a , struct Complex b ) {

    struct Complex rezultat;
    rezultat.x=a.x+b.x;
    rezultat.y=a.y+b.y;
    return rezultat;
}

struct Complex scadere ( struct Complex a , struct Complex b ) {

    struct Complex rezultat;
    rezultat.x=a.x-b.x;
    rezultat.y=a.y-b.y;
    return rezultat;
}

struct Complex inmultire ( struct Complex a , struct Complex b ) {

    struct Complex rezultat;
    rezultat.x=a.x*b.x;
    rezultat.y=a.y*b.y;
    return rezultat;
}

struct Complex modul ( struct Complex a ) {
    Complex mod;
    mod.x=sqrt(a.x*a.x);
    mod.y=sqrt(a.y*a.y);
    return mod;
}


int main(){

    struct Complex X = citeste();
    cout << "Numarul complex este: ";
    afiseaza(X);
    struct Complex Y = citeste();
    cout << "Numarul complex este: ";
    afiseaza(Y);
    cout << "Suma numerelor este: ";
    afiseaza(adunare(X,Y));
    cout << "Diferenta numerelor este: ";
    afiseaza(scadere(X,Y));
    cout<< "Inmultirea numerelor este: ";
    afiseaza(inmultire(X,Y));
    cout << "Modulul numarului este:";;
    afiseaza(modul(X));

    return 0;
}
