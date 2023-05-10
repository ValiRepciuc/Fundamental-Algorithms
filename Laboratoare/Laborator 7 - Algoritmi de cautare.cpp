//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//7.1 Cautarea primei aparitii a unei valori dintr-un vector unidimensional, folosind cautarea secventiala.


#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Introduceti ce valoare doriti sa cautati: \n";
    cin >> x;
    int n;
    cout << "Introduceti lungimea vectorului: \n";
    cin >> n;
    int v[n];
    cout << "Introduceti valorile pentru vector: \n";
    for(int i=1;i<=n;i++){
        cin >> v[i];
    }
    int gasit=0;
    for(int i=1;i<=n;i++){
        if(v[i]==x){
            gasit=i;
            break;
        }
    }
    cout <<"Numarul cautat, " << x << ", se afla pe pozitia " << gasit << " in vector";
    return 0;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

 // 7.2  Aceeasi problema ca la 7.1 dar folosind cautarea binara si cautarea prin interpolare.



#include <iostream>
using namespace std;

void cautareBinara(int x, int n, int v[]) {
    int stanga = 0, dreapta = n, mijloc = 0, gasit = 0;
    while (stanga <= dreapta) {
        mijloc = stanga + (dreapta - stanga) / 2;
        if (v[mijloc] == x) {
            gasit = mijloc;
            dreapta = mijloc - 1;
        }
        else if (v[mijloc] < x) {
            stanga = mijloc + 1;
        }
        else {
            dreapta = mijloc - 1;
        }
    }
    cout << "\nPrima pozitie pe care se gaseste numarul " << x << " este " << gasit;
}

void cautareInterpolare(int x, int n, int v[]) {
    int stanga = 0, dreapta = n, mijloc = 0, gasit = 0;
    while (stanga <= dreapta) {
        mijloc = stanga + (x - v[stanga]) * (dreapta - stanga) / (v[dreapta] - v[stanga]);
        if (v[mijloc] == x) {
            gasit = mijloc;
            dreapta = mijloc - 1;
        }
        else if (v[mijloc] < x) {
            stanga = mijloc + 1;
        }
        else {
            dreapta = mijloc - 1;
        }
    }
    cout << "\nPrima pozitie pe care se gaseste numarul " << x << " este " << gasit;
}

int main() {
    int x;
    cout << "Introduceti ce valoare doriti sa cautati: \n";
    cin >> x;
    int n;
    cout << "Introduceti lungimea vectorului: \n";
    cin >> n;
    int v[n];
    cout << "Introduceti valorile pentru vector: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cautareBinara(x, n, v);
    cautareInterpolare(x,n,v);
    return 0;
}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//7.3 Cautarea ultimei aparitii a unei valori dintr-un vector unidimensional, folosind cautarea binara.

#include <iostream>
using namespace std;

int main() {
    int x;
     cout << "Introduceti ce valoare doriti sa cautati: \n";
    cin >> x;
    int n;
    cout << "Introduceti lungimea vectorului: \n";
    cin >> n;
    int v[n];
    cout << "Introduceti valorile pentru vector: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int gasit = 0, stanga = 0, dreapta = n, mijloc = 0;
    while (stanga <= dreapta) {
        mijloc = stanga + (dreapta - stanga) / 2;
        if (v[mijloc] == x) {
            gasit = mijloc;
            stanga = mijloc + 1;
        }
        else if (v[mijloc] < x) {
            stanga = mijloc + 1;
        }
        else {
            dreapta = mijloc - 1;
        }
    }
    cout << "Numarul catautat " << x << ", se afla pe pozitia " << gasit << " in vector";
    return 0;
}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//7.4. determinarea numarului de aparitii ale unui numar din multimea valorilor unui vecttor unidimensional, folosind cautarea secventiala.

#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Introduceti ce valoare doriti sa cautati: \n";
    cin >> x;
    int n;
    cout << "Introduceti lungimea vectorului: \n";
    cin >> n;
    int v[n];
    cout << "Introduceti valorile pentru vector: \n";
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    int totalaparitii=0;
    for(int i=1;i<=n;i++){
        if(v[i]==x)
            totalaparitii++;
    }
    cout << "Numarul total de aparitii ale numarului " << x << " este de " << totalaparitii << " aparitii.";
}
*/

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//7.5 Modificati programul de la 7.4 folosind cautarea binara


#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Introduceti ce valoare doriti sa cautati: \n";
    cin >> x;
    int n;
    cout << "Introduceti lungimea vectorului: \n";
    cin >> n;
    int v[n];
    cout << "Introduceti valorile pentru vector: \n";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int stanga = 0, dreapta = n, mijloc = 0, gasit = 0;
    while (stanga <= dreapta) {
        mijloc = stanga + (dreapta - stanga) / 2;
        if (v[mijloc] == x) {
            gasit = mijloc;
            dreapta = mijloc - 1;
        }
        else if (v[mijloc] < x) {
            stanga = mijloc + 1;
        }
        else {
            dreapta = mijloc - 1;
        }
    }
    int totalaparitii=0;
    for(int i=gasit;i<n;i++){
        if(v[i]==x){
            totalaparitii++;
        }
    }
    cout << "Totalul de aparitii a numarului " << x << " este de: " << totalaparitii << " aparitii";
}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//7.6  Determinati elementul de varf dintre elementele unui vector unidimensional, folosin cautarea binara.

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Introduceti lungimea vectorului: \n";
    cin >> n;
    int v[n];
    cout << "Introduceti valorile pentru vector: \n";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int stanga = 0, dreapta = n, mijloc = 0, maxim = v[0];
    while (stanga <= dreapta) {
        mijloc = stanga + (dreapta - stanga) / 2;
        if (v[mijloc] == 0 || v[mijloc] > v[mijloc - 1]) {
            if (mijloc == n - 1 || v[mijloc] > v[mijloc + 1]) {
                cout << "Maximul vectorului este" << v[mijloc];
                break;
            }
            else{
                stanga =mijloc +1;
            }
        }
        else{
            dreapta = mijloc -1;
        }
    }

}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    //7.7 Cautarea elementului lipsa dintr-o secventa de valori ale unui vector unidimensional, intr-un timp logaritmic

#include <iostream>

using namespace std;

int lipsaelement(int v[], int n) {

    int r=(v[n-1]-v[0])/n;
    int stanga = 0, dreapta = n, mijloc = 0;
    while(stanga<=dreapta){
        mijloc=dreapta - (dreapta-stanga)/2;
        if(mijloc + 1 < n && v[mijloc+1] - v[mijloc]!=r){
            return v[mijloc+1]+r;
        }
        if(mijloc - 1 >= 0 && v[mijloc] - v[mijloc -1] !=r){
            return v[mijloc-1]+r;
        }
        if(v[mijloc] - v[0] != mijloc * r){
            dreapta = mijloc - 1;
        }
        else {
            stanga = mijloc + 1;
        }

    }


}

int main() {

    int x[]= {3, 5 ,7, 9, 11, 15};
    int lipsa= lipsaelement(x,6);
    cout <<"Elementul lipsa din primul vector este: " << lipsa;
    int x2[]={1,4, 7, 13 ,16};
    int lipsa2= lipsaelement(x2,5);
    cout<<"\nElementul lipsa din cel de al doilea vector este " << lipsa2;

    return 0;
}



//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
