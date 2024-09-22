#include<stdio.h>
float area_perimetro(float *x, float *y, float *A, float *p);
int main(){
    float a, b, A, p, t;
    printf("Entre com os lados do retangulo:\n");
    scanf("%f %f", &a, &b);
    t=area_perimetro(&a, &b, &A, &p);
    printf("Area = %.2f\nPerimetro = %.2f\n", A, p);
    if (t==1)
        printf("Area maior que 100 cm^2\n");
    else
        printf("Area menor ou igual a 100 cm^2\n");
    return 0;
}
float area_perimetro(float *x, float *y, float *A, float *p){
    *A=(*x)*(*y);
    *p=2*(*x)+2*(*y);
    if (*A>100)
        return 1;
    else
        return 0;
}