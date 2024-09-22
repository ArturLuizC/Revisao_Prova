// Escreva uma função que recebe os parâmetros l1 e l2 com as medidas em centímetros dos dois
// lados de um retângulo e escreve em parâmetros a e p respectivamente a área e o perímetro
// deste retângulo.
#include<stdio.h>
void area_perimetro(float *x, float *y, float *A, float *p);
int main(){
    float a, b, A, p;
    printf("Entre com os lados do retangulo:\n");
    scanf("%f %f", &a, &b);
    area_perimetro(&a, &b, &A, &p);
    printf("Area = %.2f\nPerimetro = %.2f\n", A, p);
    return 0;
}
void area_perimetro(float *x, float *y, float *A, float *p){
    *A=(*x)*(*y);
    *p=2*(*x)+2*(*y);
}