//5.1 Scrieti un program care demonstreaza ca suma numerelor de la 1 la n este egala cu n(n+1)/2
#include <stdio.h>
int testsuma(int n){
    int x = n+1;
    return (n*x)/2;
}
int main() {
    int n;
    printf("Introduceti numarul dorit:");
    scanf("%d",&n);
    int suma=0;
    for(int i=1;i<=n;i++) {
        suma += i;
    }
    printf("\nSuma secventiala intr-un for este egala cu: %d",suma);
    int suma2=testsuma(n);
    printf("\nSuma dupa aplicarea formulei n(n+1)/2 este egala cu: %d",suma2);
    if(suma==suma2){
        printf("\nAmbele metode dau acelasi rezultat.");
    }
    return 0;
}

 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// 5.2 Scrieti un program care demonstreaza ca suma patratelor numerelor de la 1 la n este egala cu n(n+1)(2n+1)/6
#include <stdio.h>

int testprodus(int n){
    int x=n+1;
    int y=2*n+1;
    return n*x*y/6;
}

int main(){
    int n;
    printf("Introduceti numarul dorit:");
    scanf("%d",&n);
    int produs=0;
    for(int i=1;i<=n;i++){
        produs+=i*i;
    }
    printf("\nProdusul secvential dintr-un for este egal cu: %d",produs);
    int produs2=testprodus(n);
    printf("\nProdusul calculat cu formula n(n+1)(2n+1)/6 este egal cu: %d",produs2);
    if(produs==produs2){
        printf("\nAmbele metode dau acelasi rezultat");
    }
}

 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// 5.3 Scrieti un program care determina divizorul numerelor de forma n3+2n, n>0. Dar pentru n5-n


//n3+2n

#include <stdio.h>
#include <math.h>

int main(){

    int n;
    printf("Introduceti un numar mai mare decat 0:" );
    int k=0;
    do{
        if(k>=1){
            printf("Numarul introdus este mai mic decat 0, va rog introduceti alta valoare: ");
            }
        scanf("%d",&n);
        printf("\n");
        k++;
    }while(n<0);
    int putere=pow(n,3);
    int x=putere+n*n;
    printf("Divizorii numarului %d sunt: ",x);
    for(int i=2;i<x/2;i++){
        if(x%i==0)
            printf("%d ",i);
    }


}

//n5-n
#include <stdio.h>
#include <math.h>

int main() {

    int n;
    printf("Introduceti un numar mai mare decat 0:");
    int k = 0;
    do {
        if (k >= 1) {
            printf("Numarul introdus este mai mic decat 0, va rog introduceti alta valoare: ");
        }
        scanf("%d", &n);
        printf("\n");
        k++;
    } while (n < 0);
    int putere = pow(n, 5);
    int x = putere - n;
    printf("Divizorii numarului %d sunt: ", x);
    for (int i = 2; i < x / 2; i++) {
        if (x % i == 0)
            printf("%d ", i);
    }
}

  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

 // 5.4 Scrieti un program care calculeaza ab, a si b numere naturale,  prin 2 metode diferite,
//metoda 1

#include <stdio.h>

int main(){
    int a;
    printf("Introduceti un numar: ");
    scanf("%d",&a);
    int b;
    printf("\nIntroduceti un numar: ");
    scanf("%d",&b);
    int putere=0;
    if(a==0 && b==0)
        printf("%d la puterea %d este egal cu 1", a, b);
    else if(a==1)
        printf("%d la puterea %d este egal cu 1", a, b);
    else if(a==0)
        printf("%d la puterea %d este egal cu 0", a, b);
    else if(b==0){
        printf("%d la puterea %d este egal cu 1",a ,b);
    }
    else if(b==1)
        printf("%d la puterea %d este egal cu %d",a,b,a);
    else {
        for (int i = 1; i <= b; i++) {
            putere += a * a;
            i++;
        }
        printf("%d la puterea %d este egal cu %d", a, b, putere);
    }
}

 //metoda 2


#include <stdio.h>
#include <math.h>

int putere(int a, int b){
    if(a==0 && b==0)
        return 1;
    else if(a==1)
        return 1;
    else if(a==0)
        return 0;
    else if(b==1)
        return a;
    else if(b==0)
        return 1;
    else
        return pow(a,b);

}

int main(){
    int a;
    printf("Introduceti un numar: ");
    scanf("%d",&a);
    int b;
    printf("\nIntroduceti un numar: ");
    scanf("%d",&b);
    int power=putere(a,b);
    printf("%d la puterea %d este egal cu %d", a,b, power);
}

  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// 5.5 Scrieti un program care determina elementul minim de pe linia elementului maxim dintr-un vector bidimensional.


#include <stdio.h>


int main(){
    int x;
    printf("Introduceti marimea matricei M: ");
    scanf("%d",&x);
    int m[x][x];
    for(int i=0;i<x;i++) {
        for (int j = 0; j < x; j++) {
            scanf("%d",&m[i][j]);
        }
    }
    int maxim=0;
    int linie=-1;
    for(int i=0;i<x;i++) {
        for (int j = 0; j < x; j++) {
            if (m[i][j] > maxim) {
                maxim = m[i][j];
                linie=i;
            }
        }
    }
    int minimlinie=100;
    for(int i=linie;i<=linie;i++) {
        for (int j = 0; j < x; j++) {
            if(m[i][j]<minimlinie)
                minimlinie=m[i][j];
        }
    }
    printf("Elementul minim de pe linia elementului maxim este: %d",minimlinie);
}

  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// 5.6 Scrieti un program care inverseaza un numar intreg, dupa care elimina din numarul
 rezultat cifrele pare, daca exista, fara a inversa numarul.



#include <stdio.h>

int main(){

    int x;
    printf("Introduceti numarul dorit: ");
    scanf("%d",&x);
    int aux=x;
    int invers=0;
    while(aux>0){
        invers=invers*10+aux%10;
        aux/=10;
    }
    printf("Numarul inversat inainte de ii elimina cifrele pare este:%d",invers);
    int auxinvers=invers;
    int final=0;
    int x1=1;
    while(auxinvers>0){
        int rest=auxinvers%10;
        if(rest%2==1) {
            final += rest * x1;
            x1=x1*10;
        }
        auxinvers/=10;
    }
    printf("\nRezultatul final este:%d",final);
}

  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 // 5.7 Scrieti un program care determina divizorul unui numar, iar divizorul este de forma a) d3+2d, n>0. Dar pentru b) d5-d

Exemplu: 

a)  n=240 rezultatul este 2

b) n=240 rezultatul este 2 si 3  
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//a) d^3 + 2d;

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Introduceti un numar: ");
    do{
        scanf("%d",&n);
    }while(n<0);
    int d=1;
    printf("\nPentru %d divizorul sau este: ",n);
    for(int i = 2; i < n/2 ; i++){
        
        d=pow(i,3) - 2*i;
        if(n%d==0)
            printf("%d ",i);
        
    }
    return 0;
}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//b) d^5-d

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Introduceti un numar: ");
    do{
        scanf("%d",&n);
    }while(n<0);
    int d=1;
    printf("\nPentru %d divizorul sau este: ",n);
    for(int i = 2; i < n/2 ; i++){
        
        d=pow(i,5) - i;
        if(n%d==0)
            printf("%d ",i);
        
    }
    return 0;
}
