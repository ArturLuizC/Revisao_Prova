#include <stdio.h>
void troca(int *a, int *b);
int main(void){
    int n1, n2, *pa, *pb;
    pa = &n1;
    pb = &n2;
 /* Não se usa isto normalmente. É um exercício p/ aprender ponteiros*/
 /* Como seria o scanf utilizando pa e pb em vez de n1 e n2? */
    scanf("%d %d",pa,pb);
 /* Como seria troca com pa e pb? */
    troca(pa,pb);
 /* Como seria printf com pa e pb? */
    printf("\n Troquei: %d %d",*pa,*pb);
    return 0;
}
void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}