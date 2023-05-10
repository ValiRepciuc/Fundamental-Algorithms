//10.1 Implementati intr-un program C algoritmul de interclasare
// pentru doua tablouri unidimensionale de n, respectiv m valori intregi.

#include <stdio.h>

int main() {
    int n=4, m=4;
    int a[]={1,2,6};
    int b[]={7, 10, 17, 25};
    int k=0, i=0, j=0;
    int p=m+n;
    int c[p];
    while(i<n && j<m){

        if(a[i]<=b[i])
            c[k++] = a[i++];
        else
            c[k++]=b[j++];
    }
    if(i<n){
        for(int p=i;i<n;p++){
            c[k++]=a[p];
        }
    }
    if(j<m) {
        for (int p = j; p < m; p++) {

            c[k++] = b[p];
        }
        printf("Dupa interscalare vectorul c arata de forma: \n");
        for (int i = 0; i < p; i++) {
            printf("%d ", c[i]);
        }
    }
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//10.2. În imaginea de mai jos este exemplificat algoritmul de Sortare prin interclasare
// (Mergesort) pentru şirul de valori: 9, 7, 13, 1,  6, 14, 23, 10.

#include <stdio.h>

void merge_sort(int v[], int n);
void merge_sort_recursion(int v[], int l, int r);
void merge_sorted_arrays(int v[], int l, int m, int r);

int main() {

    int n=8;
    int v[]={9, 7, 13, 1, 6, 14, 23, 10};
    merge_sort(v, n);
    printf("Dupa executarea mergesort-ului vectorul v arata de forma: \n");
    for(int i = 0; i < n; i++){
        printf("%d ",v[i]);
    }
    return 0;
}

void merge_sort(int v[], int n){

    merge_sort_recursion(v, 0, n-1);

}

void merge_sort_recursion(int v[], int l, int r){

    if(l < r) {
        int m = l + (r - l) / 2;

        merge_sort_recursion(v, l, m);
        merge_sort_recursion(v, m + 1, r);

        merge_sorted_arrays(v, l, m, r);
    }

}

void merge_sorted_arrays(int v[], int l, int m, int r) {

    int left_n = m - l + 1;
    int right_n = r - m;

    int temp_l[left_n];
    int temp_r[right_n];

    int i, j, k;

    for (int i = 0; i < left_n; i++) {

        temp_l[i] = v[l + i];
    }

    for (int i = 0; i < right_n; i++) {

        temp_r[i] = v[m + 1 + i];
    }

    for(i = 0, j = 0, k = l; k <= r; k++){

        if((i < left_n) && (j >= right_n || temp_l[i] <= temp_r[j] )){

            v[k] = temp_l[i];
            i++;
        }
        else{

            v[k]=temp_r[j];
            j++;
        }


    }
}



~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//10.3 Implementati intr-un program C secventa de pivotare, prima iteratie, din algoritmul de sortare pentru
// un tablou unidimensional de n valori intregi: 57, 44, 101, 85, 15, 75, 11, 33. Afisati elementele vectorului
// dupa executia primei iteratii de pivotare. Observati si explicati efectul acesteia.

#include <stdio.h>

void quicksort(int v[], int st, int dr);
int pivotare(int v[], int st, int dr);
int main(){

    int v[]={57, 44, 101, 85, 15, 75, 11, 33};
    int n=8;
    quicksort(v, 0,n-1);
    printf("Dupa quicksort vectorul arata de forma: \n");
    for(int i=0;i<n;i++){
        printf("%d ", v[i]);
    }


}

void quicksort(int v[], int st, int dr) {

    if(st<dr) {

        int poz = pivotare(v, st, dr);

        quicksort(v, st, poz - 1);
        quicksort(v, poz + 1, dr);
    }

}

int pivotare(int v[], int st, int dr){

    int pivot = v[st];
    int s = st+1;
    int d = dr;
    while(s<=d){
        while(v[d]>pivot){
            d=d-1;
        }
        while(v[s]<pivot && s<=d){
            s=s+1;
        }
        if(s<=d){
            int temp=v[s];
            v[s]=v[d];
            v[d]=temp;
            d=d-1;
            s=s+1;
        }
    }
    int temp= v[st];
    v[st]=v[d];
    v[d]=temp;
    return d;

}
