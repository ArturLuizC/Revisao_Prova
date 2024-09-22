// Escreva um programa que defina uma função denominada troca que recebe dois parâmetros:
//n1 e n2 do tipo int e troque seus valores e estes valores sejam apresentados na função main.

#include<stdio.h>

void troca(int *m1, int *m2);

int main(){
    int x, y, *p, *q;
    printf("Entre com dois valores\n");
    scanf("%d %d", &x, &y);
    p=&x;
    q=&y;
    troca(&x, &y);
    printf("Valores trocados:\nx = %d\ny = %d\n", *p, *q);
}

void troca(int *p, int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}