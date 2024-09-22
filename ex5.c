// Escreva um programa que possua uma função que recebe dois parâmetros: a e b, e que devolve o
// menor dos dois em a e o maior dos dois em b. Caso sejam passados valores repetidos, a ordem da
// resposta entre eles não importa.
#include<stdio.h>
void troca(float *x, float *y);
int main(){
    float a, b, *p, *q;
    p=&a;
    q=&b;
    printf("Entre com dois valores:\n");
    scanf("%f %f", p, q);
    troca(p, q);
    printf("Menor valor(a): %.2f\nMaior valor(b): %.2f\n", *p, *q);
    return 0;
}
void troca(float *x, float *y){
    float temp;
    if (*x>*y){
        temp=*x;
        *x=*y;
        *y=temp;
    }
    else 
        return;
}