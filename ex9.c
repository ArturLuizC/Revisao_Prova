#include<stdio.h>
char sit(float *s);
int main(){
    float s;
    char c;
    printf("Informe a situacao atual do cliente\nP - Preferencial\nI - Irregular\nR - Regular\n");
    scanf("%c", &c);
    printf("Informe o saldo\n");
    scanf("%f", &s);
    printf("Situacao: %c\nSaldo: %.2f\n", c, s);
    c=sit(&s);
    printf("Situacao atualizada: %c", c);
}
char sit(float *s){
    if (*s<0.0)
        return('I');
    if (*s>=500.0)
        return('P');
    else
        return('R');
}