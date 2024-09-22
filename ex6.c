// Escreva um programa que possua uma função que recebe três parâmetros: a, b e c, e devolve
// o menor deles em a, o maior em c, e o valor do meio em b. C

#include<stdio.h>
void troca(float *a, float *b, float *c);
int main(){
    float a, b, c;
    printf("Entre com 3 valores:\n");
    scanf("%f %f %f", &a, &b, &c);
    troca(&a, &b, &c);
    printf("a = %.2f\nb = %.2f\nc = %.2f\n", a, b, c);
    return 0;
}
void troca(float *a, float *b, float *c){
    float temp;
    if (*a<*b && *a<*c){
        if (*b<*c)
            return;
        else{
            temp=*b;
            *b=*c;
            *c=temp;
        }
    }
    if (*a>*b && *a>*c){
        if (*b>*c){
            temp=*a;
            *a=*c;
            *c=temp;}
        else{
            temp=*a;
            *a=*b;
            *b=*c;
            *c=temp;
        }
    }
    if (*a>*b && *a<*c){
        temp=*a;
        *a=*b;
        *b=temp;
    }
    if (*a<*b && *a>*c){
        temp=*a;
        *a=*c;
        *c=*b;
        *b=temp;
    }
}