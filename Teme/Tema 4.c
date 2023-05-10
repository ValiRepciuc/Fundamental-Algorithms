//4.1. Care este rezultatul executiei urmatoarei secvente de program? Demonstrati

 var maxNum=-1;
 for(var i=0; i<numbers.length; i++){
    if(numbers[i]>maxNum){
        maxNum=numbers[i]
    }
 }
 println(maxNum);

 maNum | i | numbers[i]>maxNum
  -1   | 0 |        A
   5   | 1 |        F
   5   | 3 |        F
   5   | 4 |        A
   9   |


   Programul returneaza valoarea maxima dintr-un vector.

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// 4.2Fie urmatoarea secventa de cod:

    int x=1, p1, n;
    printf("Introdu n");
    scanf("%d",&n);
    while(x<=n){
        p=p*x;
        x++;
    }
    printf("%d",p);

    n   |   x   |   p   |   x<=n
    7       1   |   1   |     A
            2   |   1   |     A
            3   |   2   |     A
            4   |   6   |     A
            5   |  24   |     A
            6   |  120  |     A
            7   |  720  |     A
            8   |  5040 |     F

    Ni se returneaza factorialul numarului 7;

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//4.3.  Fie urmatoarea secventa de cod:

    int n, nr=0;
    scanf("%d",&n);
    while(n!=0){
        nr=nr*10+n%10;
        n/=10;
    }
    printf("%d", nr);

    Care este semnificatia algoritmului? Demonstrati!

    n   |   nr  |   n!=0
    210 |   0   |     A
    21  |   0   |     A
    2   |   1   |     A
    0   |   3   |     F

    Ne returneaza suma cifrelor a unui numar(210 : 2 + 1 + 0 = 3 A);

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   // 4.4. Fie urmatoarea functie :


 int test (int x, int y){

    return x == y ? (x+y)*3 : x+y;
}
int main() {
    int x=test(1,2);
    printf("%d",x);
    return 0;
}

 Daca x si y sunt egale se returneaza suma acestora ori mutliplu de 3, daca nu, se returneaza doar suma x si y;


