//9.1 Implementaţi algoritmul de sortare prin selecţia maximului crescator.


#include <stdio.h>

int main() {

    int v[]={5,9,3,6,7,8,2,1};
    int lungime=8;
    printf("Se va efectua sortarea prin selectia maximului crescator\n");
    printf("Forma curenta a vectorului:\n");
    for(int i=0;i<lungime;i++){
        printf("v[%d]=%d\n",i,v[i]);
    }
    for(int i=0;i<lungime-1;i++){

        int poz_max=i;
        for(int j=i+1;j<lungime;j++){
            if(v[j]>v[poz_max])
                poz_max=j;

        }

        if(poz_max != i ){

            int temp = v[i];
            v[i]=v[poz_max];
            v[poz_max]=temp;
        }
    }
    printf("Forma finala a vectorului:\n");
    for(int i=0;i<lungime;i++){
        printf("v[%d]=%d\n",i,v[i]);
    }
    return 0;
}


//9.2 Pentru algoritmii de sortare prin inserţie, respectiv prin selecţia minimului,
// scrieţi variantele care ordonează descrescător elementele vectorului v.


#include <stdio.h>

void insertion_sort(int v[], int lungime){

    for(int i=1; i<lungime;i++){
        int elementcurent=v[i];
        int j=i-1;
        while(j >= 0 && v[j] < elementcurent){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=elementcurent;
    }

}

int main(){

    int v[]={5,9,3,6,7,8,2,1};
    int lungime=8;
    printf("Se va efectua sortarea descrescatoare prin insertie\n");
    printf("Forma curenta a vectorului:\n");
    for(int i=0;i<lungime;i++){
        printf("v[%d]=%d\n",i,v[i]);
    }
    insertion_sort(v,lungime);
    printf("Forma finala a vectorului:\n");
    for(int i=0;i<lungime;i++){
        printf("v[%d]=%d\n",i,v[i]);
    }

}



//9.3 . Sortare prin numărare. Fie un vector de  n numere naturale ale cărui elemente fac parte din
// mulţimea {0; 1; 2; ... ;m-1}, unde m este cel mult egal cu n. Să se sorteze crescător elementele vectorului astfel
// încât complexitatea algoritmului folosit să fie liniară.
//
//Indicaţie: se construieşte un vector w cu m elemente în care w[i] reprezintă frecvenţa de apariţie a lui i
// în şirul dat, oricare ar fi 0 ≤ i < m; se construieşte şirul sortat crescător folosind informaţia din w.
// La implementare se ţine cont de timpul de execuţie astfel încât complexitatea să fie O(n + m).


#include <stdio.h>

void CountingSort(int array[], int n){

    int i, w[n];
    int maxim=array[0];

    //Aflam maximul

    for(i=1;i<n;i++){
        if(maxim<array[i])
            maxim =array[i];
    }

    //Initializam vectorul count in care o sa numaram aparitiile numerelor din vectorul v;
    //Dam valori nule in intreg vectorul count;
    int count[maxim+i];

    for(i=0;i<=maxim;i++){
        count[i]=0;
    }

    //Inmagazinam vectorul count cu numarul de aparente pentru fiecare numar din vectorul v;

    for(i=0;i<n;i++){

        count[array[i]]++;

    }

    //Actualizam vectorul count

    for(i=1; i <= maxim; i++){

        count[i]=count[i] + count[i-1];

    }

    for(i=n-1;i>=0;i--){

        w[--count[array[i]]]=array[i];
    }

    for(i=0;i<n;i++){

        array[i]=w[i];

    }

}

int main(){

    int v[]={5,9,3,6,7,8,2,1};
    int n=8;
    printf("Se va efectua sortarea prin numarare\n");
    printf("Forma curenta a vectorului:\n");
    for(int i=0;i<n;i++){
        printf("v[%d]=%d\n",i,v[i]);
    }
    CountingSort(v, n);
    printf("Forma finala a vectorului:\n");
    for(int i=0;i<n;i++){
        printf("v[%d]=%d\n",i,v[i]);
    }
}
