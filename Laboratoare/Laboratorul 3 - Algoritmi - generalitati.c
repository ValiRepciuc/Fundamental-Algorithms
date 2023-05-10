
//3.1 I.  Sa presupunem ca avem de ghicit un numar intr-o multime de numere de la 1 la 10.

 a)cate abordari in procesul de cautare avem?
Prin cautarea secventiala avem maxima de 10 abordari;
Prin cautarea binara avem maximul de logn;

b) Exista o abordare mai rapida in ghicirea numarului?
 Cautarea binara.
c) Care este numarul maxim de incercari in fiecare din abordari?
 Secvential - 10;
 Binar - 4;

 II.Aceeasi problema dar plaja numerelor este de la 1 la 100. Care este numărul maxim de încercări dupa metota I.a?
 Explicati.

 1-100;
 Prin cautare secventiala 100 de incercari;
 Pentru cautare binara cazul nefavorabil va fi prima sau ultima valoare. (maxim 7 pasi)
   
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


// 3.2 Descrieti care este algoritmul de determinare a solutiei de iesire din labirint in cel mai mic numar de miscari.

 Peretii vor avea valoarea -1, iar drumul neparcurs este notat cu 0, la fiecare pas incrementam cu +1, iar drumul cel mai
 scurt va fii cel din partea dreapta cu 13 pasi;

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// 3.3 Specificați algoritmul de inmultire a 2 numere naturale;
 Prin adunari repetate:
 Exemplu
    x * y => x+x+....+x; de y ori;

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// 3.4 Pe baza algoritmului 3.3. descrieti modul de realizare a unui algoritm de inmultire a trei numere naturale.
 Prin adunari repetate:
 Exemplu
    a * b * c;
    Notam a * b =d;
    d = a*b = a + a + ... + a; de b ori;
    d * c = d + d +...+d; de c ori;

