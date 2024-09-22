#include<stdio.h>

void dec(double v, int *p_i, double *p_f);

int main(){
    double v, f;
    int i;
    printf("Entre com o valor\n");
    scanf("%lf", &v);
    dec(v, &i, &f);
    printf("Parte inteira: %d\nParte fracionaria: %.5lf\n", i, f);
    return 0;
    }

    void dec(double v, int *p_i, double *p_f){
        *p_i=(int) v;
        *p_f=v-*p_i;
    }