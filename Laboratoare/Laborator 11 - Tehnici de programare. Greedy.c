//11.1 Problema fracţionară a rucsacului


#include <stdio.h>
#include <stdlib.h>

struct obiect{
    float greutate;
    float valoare;
    int index;
};


void  sort_desc(struct obiect ob[], int n)
{
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((float)ob[i].valoare/ob[i].greutate<(float)ob[j].valoare/ob[j].greutate){
                struct obiect temp = ob[i];
                ob[i]=ob[j];
                ob[j]=temp;
            }
        }
    }
}




void rucsac(struct obiect ob[], int n, float M)
{

    sort_desc(ob,n);
    float s=0;
    int i=0;
    while(s+ob[i].greutate <= M && i<n){

        s = s + ob[i].greutate;
        printf("Obiectul, %d, a fost introdus complet - greutatea, %f, valoarea, %f.\n", ob[i].index, ob[i].greutate, ob[i].valoare);
        i=i+1;
    }

    if(s<M && i<n){
        printf("Obiectul, %d, a fost introdus partial - greutatea, %f, - valoarea %f\n", ob[i].index, M-s, (float)(ob[i].valoare*(M-s))/ob[i].greutate);
    }

}


int main(int argc, char** argv) {

    float M=100;
    int n=7, i;
    struct obiect ob[100];
    for(i=0;i<n;i++)
    {
        printf("Introdu valoarea si greutatea obiectului %d:\n",i+1);
        scanf("%f %f", &ob[i].valoare, &ob[i].greutate);
        ob[i].index=i+1;
    }

    rucsac( ob, n, M);


    return (EXIT_SUCCESS);
}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\

//11.2 Colorarea unei hărţi (zone)


#include <stdio.h>


void colorare(int n, int v[], int t[20][20])
{
   int c=1;
   int cmax=1;
   v[0]=1;
    int ok;
    for(int i=1;i<n;i++){
       c=1;
       do{
           ok=1;
           for(int j=0;j<i;j++){
               if(t[i][j]==1 && v[j]==c){
                   ok = 0;
               }
           }
           if(ok == 1){
               v[i]=c;
           }
           else
               c=c+1;
       }while(ok==0);
           if(c>cmax)
               cmax=c;

   }
}
int main()
{
    int t[20][20]={
                    {0,1,1,1,0,1,0},
                   {1,0,1,0,0,1,0},
                   {1,1,0,0,0,0,0},
                   {1,0,0,0,1,1,0},
                   {0,0,0,1,0,1,1},
                   {1,1,0,1,1,0,1},
                   {0,0,0,0,1,1,0}
                                                                        };
    int i,n=7;
    int v[20];
    colorare(n,v,t);
    printf("Dupa colorare vectorul este: \n");
    for(i=0;i<n;i++){
        printf("c%d ",v[i]);
    }
    return 0;
}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//11.3  Pentru un vector unidimensional, determinati suma a[i]*i, astfel incat aceasta sa fie maxima. Folositi un algoritm Greedy.


#include <stdio.h>

void bubblesort(int v[], int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] > v[j]) {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;

            }
        }


    }
}
int main(){

    int v[]={10,2,13,40,5};
    int n=5;
    bubblesort(v, n);
    int suma=0;
    for(int i=0;i<n;i++){
        suma=suma + v[i]*i;
    }
    printf("Suma maxima este: %d", suma);

}
