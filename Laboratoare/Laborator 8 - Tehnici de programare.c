// 8.5. Scrieti un program recursiv care calculeaza 3n-2n.

#include <stdio.h>

int putere(int n, int x, int y){
    if(n==0)
        return 0;
    if(n==1)
        return x-y;
    else
        return putere(n-1, 3*x,2*y);

}

int main(){

    int n;
    printf("Introduceti puterea dorita: \n");
    scanf("%d",&n);
    int p=putere(n , 3 , 2);
    printf("%d",p);

}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//8.6. Scrieti un program recursiv care calculeaza factorialul unui numar natural n.

#include <stdio.h>

int factorial(int n){

    if(n==0)
        return 1;
    return n* factorial(n-1);


}


int main(){

    int n;
    printf("Introduceti numarul dorit: \n");
    scanf("%d",&n);
    printf("%d", factorial(n));

}
 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//8.7 Având în vedere un vector unidimensional, găsiți numărul total de inversiuni ale acestuia.
// Dacă (i < j) și (A[i] > A[j]), atunci perechea (i, j) se numește o inversare a unui vector A. Trebuiesc numărate toate astfel de perechi din tablou.

 #include <stdio.h>

int inversiuni(int A[], int inv){

    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(i<j && A[i]>A[j]) {
                printf("(%d,%d)", A[i], A[j]);
                inv++;
            }

        }

    }
    return inv;



}

int main() {
    int A[] = {1, 9, 6, 4, 5};
    int inv=0;
    printf("\nNumarul total de inversiuni este %d", inversiuni(A,inv));
    return 0;
}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//8.8
/*
#include <stdio.h>

int elemlipsa(int v[]){
    int lipsa=0;
    for(int i=0;i<7;i++){

    }
}

int main(){

    int nums[] = {0, 1, 2, 6, 9, 11, 15};

}

*/

//8.8 Determinati elementul cel mai mic diferit de 0 lipsa dintre elementele unui vector unidimensional, ordonat crescator.
// caz 1

#include <stdio.h>



int main(){

    int nums[] = {0, 1, 2, 6, 9, 11, 15};
    size_t n=sizeof(nums)/sizeof(nums[0]);
    int st=0, dr=n-1, mid;
    while(st<=dr){
        mid=(st+dr)/2;
        if(nums[mid]==mid)
            st=mid+1;
        else dr=mid-1;
    }
    printf("%d", st);

}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//8.9 Aceeasi problema ca la exercitiul 8.9, dar utilizand un algoritm in timp de executie logaritmic.

#include <stdio.h>

int cautElemLipsa(int v[],int st, int dr){

    if(st>dr)
        return st;
    int mijloc = (st+dr)/2;
    if(v[mijloc]==mijloc){
        return cautElemLipsa(v,mijloc+1, dr);
    }
    else
        return cautElemLipsa(v,st,mijloc-1);
}



int main() {

    int nums[] = {0, 1, 2, 6, 9, 11, 15};
    size_t n=sizeof(nums)/sizeof(nums[0]);
    printf("Elementul lipsa este %d", cautElemLipsa(nums, 0, n-1));


}
