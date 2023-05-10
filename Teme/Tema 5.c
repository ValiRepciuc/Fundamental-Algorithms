//5.1. Scrieți un program C/C++ care pentru 2 numere returneaza adevărat dacă unul dintre ele  sau dacă suma lor este 30.


#include <stdio.h>

 void verificare(int x, int y){

     if(x==30){
         printf("Primul numar introdus este 30");
     }
     else if(y==30){
         printf("Al doilea numar este 30");
     }
     else if(x+y==30)
         printf("Suma celor doua numere dau 30");
     else
         printf("Nici unul dintre numere sau suma acestora nu dau 30");
}
int main() {
    int x, y;
    printf("Va rog introduceti doua numere: ");
    scanf("%d%d",&x,&y);
    verificare(x,y);
    return 0;
}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//5.2. Scrieți un program C/C++ pentru a verifica dacă două numere întregi nenegative date au aceeași ultima cifră.

#include <stdio.h>

void lastnmbr(int x, int y){

    int restx=x%10;
    int resty=y%10;
    if(restx==resty)
        printf("Ultima cifra a celor doua numere este identinca.");
    else
        printf("Ultima cifra a celor doua numere nu este identica");


}

int main(){
    int x, y;
    printf("Va rog introduceti primul numar ");
    int x1=-1;
    do{
        x1++;
        if(x1>0)
            printf("\nNumarul introdus este unul negativ, va rog introduceti unul pozitiv ");
        scanf("%d",&x);
    }while(x<0);
    printf("\nVa rog introduceti cel de al doilea numar ");
    int y1=-1;
    do{
        y1++;
        if(y1>0)
            printf("\nNumarul introdus este unul negativ, va rog introduceti unul pozitiv ");
        scanf("%d",&y);
    }while(y<0);
    lastnmbr(x,y);
    return 0;
}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//5.3. Scrieți un program C/C++ pentru a verifica dacă două numere întregi nenegative date au același cel mai putin
// semnificativ bit. Folositi cel putin 2 metode.



#include <stdio.h>

int main() {

    int x;
    int y;
    do {
        scanf("%d", &x);
    } while (x < 0);

    do {
        scanf("%d", &y);
    } while (y < 0);


    int bitx = 0;
    int i=1;
    while (x > 0) {
        int rest=x%2;
        bitx += rest*i;
        x/=2;
        i*=10;
    }
    int bity = 0;
    int k=1;
    while (y > 0) {

        int rest=y%2;
        bity +=rest*k;
        y/=2;
        k=k*10;
    }
    printf("%d %d\n",bitx,bity);
    int restx = bitx % 10;
    int resty = bity % 10;
    if (restx == resty)
        printf("Au acelasi cel mai putin semnificativ bit");
    else
        printf("Nu acelasi au cel mai putin semnificativ bit");
    return 0;

}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//5.4 Scrieti un program C/C++ pentru eliminarea cifrelor divizibile cu 3 din numar. Folositi cel putin 2 metode.

#include <stdio.h>

int main(){

    int x;
    printf("Introduceti un numar");
    scanf("%d",&x);
    int aux=x;
    int final=0;
    int i=1;
    if(aux<0) {
        aux *= -1;
        while (aux != 0) {

            int rest = aux % 10;
            if (rest % 3 == 1 || rest % 3 == 2) {
                final += rest * i;
                i = i * 10;
            }
            aux /= 10;
        }
        final*=-1;
    }
    else
        while (aux != 0) {

            int rest = aux % 10;
            if (rest % 3 == 1 || rest % 3 == 2) {
                final += rest * i;
                i = i * 10;
            }
            aux /= 10;
        }
    printf("\nFinal: %d",final);

}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// 5.5. Scrieti un program C/C++ pentru inversarea ordinii elementelor unui vector unidimensional. Folositi cel putin 2 metode.

#include <stdio.h>

void scanare (int v[], int x){

    printf("Introduceti valorile dorite din vector \n");
    for(int i=0;i<x;i++){
        scanf("%d",&v[i]);
    }
}

void interschimbare(int v[], int x){

    int aux=0;
    int x1=x-1;
    for(int i=0;i<x;i++){
        aux = v[i];
        v[i]=v[x1];
        v[x1]=aux;
        x1--;


    }
}
void afisare(int v[], int x){

    printf("Vectorul arata in felul urmator: \n");
    for(int i=0;i<x;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}
void inversare(int v[], int x){
    int temp=0;
    printf("Ati apelat functia de inversare\n");
    x--;
    for(int i=0;i<x;i++){
        temp=v[i];
        v[i]=v[x];
        v[x]=temp;
        x--;
    }
}
void inversare2(int v[],int x){
    printf("Ati apelat functia de inversare\n");
    for(int i=0;i<x;i++){

    }

}
int main() {

    int x;
    printf("Introduceti marimea vectorului\n");
    scanf("%d", &x);
    int v[x];
    scanare(v, x);
    interschimbare(v, x);
    afisare(v, x);
    inversare(v, x);
    afisare(v, x);
}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//5.6. Scrieti un program C/C++ pentru inversarea unui sir de caractere  fara a utiliza memorie suplimentara.



#include <stdio.h>
#include <string.h>

void oglindit(char v[]){

    int r=strlen(v);
    printf("Propozitia inversata arata in felul urmator\n");
    for(int i=r-1;i!=-1;i--){
        printf("%c",v[i]);
    }

}
int main(){

    char v[100];
    printf("Introduceti propozitia dorita\n");
    scanf("%[^\n]s",v);
    oglindit(v);
}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//5.7. Scrieţi un program  care demonstrează că  din numărul 4 se poate obţine orice număr natural n prin aplicarea următoarelor operaţii:
//
//- se adaugă la sfârşit cifra 4;
//
//- se adaugă la sfârşit cifra 0;
//
//- dacă numărul este par, se împarte la 2.
//
//Programul afiseaza un şir de numere construit conform regulilor precedente,  în care primul număr este 4 iar ultimul este n.
//Indicaţie: Şirul se va genera invers, de la n la 4, aplicând transformarile inverse. Spre exemplu: n=125, rezulta: 250, 25, 50, 5,10, 1, 2, 4.



#include <stdio.h>

int main(){

    int n;
    printf("Introduceti numarul dorit: \n");
    scanf("%d",&n);
    int x=4;
    int v[20];
    int i=1;
    do{

        if(x%2==0){
            x/=2;
        }
        else
            x*=10;
        v[i]=x;
        i++;
    }while(x<n);
    v[0]=4;

    for(int j=i-1;j>=0;j--){
        printf("%d ",v[j]);
    }


    return 0;
}
 
