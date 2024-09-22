// Comente cada linha da função acheSobrenome explicando o que ocorre. O que este programa imprime? 

#include <stdio.h>
char * acheSobrenome(char nome[]);
char * acheSobrenome(char nome[]){ // Recebimento dos caractéres.
    char *pnome; // Declaração de um ponteiro do tipo char nomeado pnome.
    int i = 0; // Declaração de uma varíavel inteira.
    while (nome[i] != ' '){ // Veriricação se o elemento i da sequência de caractéres é um espaço
    // em branco. Se for um espaço, o loop while é encerrado, isso indica que foi passado 
    // por todos os caractéres do primeiro nome.
        i++;
    }
    i++; // É somado 1 à variável i para pular para o começo do sobrenome.
    pnome = &nome[i]; // O ponteiro pnome aponta para o endereço do primeiro caractér do sobrenome.
    return pnome; 
}
int main (void){
    char nomeCompleto[80];
    char *p;
    puts("Entre com o seu nome e um sobrenome: ");
    fgets(nomeCompleto, 79, stdin);
    p = acheSobrenome(nomeCompleto);
    puts(p); // O programa imprime o sobrenome. 
    return 0;}
