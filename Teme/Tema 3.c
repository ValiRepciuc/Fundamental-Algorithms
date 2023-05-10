// Exercitiul 3.1 Implementati un program pentru rezolvarea exercitiului 3.1  din laborator, pentru cautarea secventiala.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int x=rand() % 10 + 1;
    int i=0;
    int z=0;
    printf("Ghiciti numarul de la 1-10:\n");
    do{
        scanf("%d",&i);
        if(i==x) {
            printf("Felicitari numarul era %d\n", i);
        break;
        }
        else
            printf("Incercati iarasi\n");
        z++;
    }while(z<10);

    for(int i=0;i<=10;i++){
        if(i==x)
            printf("Numarul este %d, acesta a fost gasit prin cautare secventiala",i);
    }
    return 0;
}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Exercitiul 3.2
/*Implementati un program pentru calculul urmatoarei expresii:

E = 1+1*2+1*2*3+ ... + 1*2*3*...*n, in 2 variante:

a. Calculul sumei produselor la fiecare iteratie

 */

#include <stdio.h>

int main(){

    int e=0;
    int x;
    printf("Introduceti de cate ori vrei sa se efectueze inmultirea\n");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        int m=1;
       for(int j=1;j<=i;j++){
            m=m*j;
        }
       e+=m;
        printf("Suma produsului este: %d dupa %d efectuari\n",e,i);
    }
    return 0;
}
 
//b. Calcul sumei folosindu-ne de  produsul calculat la iteratia anteioara

#include <stdio.h>

int main(){

    int e=0;
    int produs=1;
    int x;
    printf("Introduceti de cate ori vrei sa se efectueze inmultirea\n");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        produs*=i;
        e+=produs;
        printf("Suma este folosindu-ne de produsul calculat la iteratia anterioara este : %d dupa %d efectuari\n",e,i);
    }
    return 0;
}
