// Considere o programa descrito a seguir. Insira comentários nas linhas 10, 11, 12, 13 e 14
// descrevendo o que está ocorrendo.

#include <stdio.h>
    void troca(int *a, int *b);
    int main(void){
        int i = 10, j = 20;
        int temp;
        int *p1, *p2;
        p1 = &i; // O ponteiro p1 recebe o endereço da variável i.
        p2 = &j; // O ponteiro p2 recebe o endereço da variável j.
        temp = *p1; // A variável temp recebe o valor do endereço apontado por p1 (valor de i).
        *p2 = *p1; // O valor do endereço apontado por p2 é trocado pelo o valor do endereço 
        // apontado por p1.
        printf("%d %d\n", i, j); // O printf exibe: "10 10"
        return 0;
    }
